#include<stdio.h>

int main()
{
    int mark[5],sum=0;
    for (int i = 0; i < 5; i++ )
    {
        scanf("%i",&mark[i]);
    }
    float average;
    for(int i = 0; i < 5 ; i++)
    {
        sum += mark[i];
    }
    average=sum/5;
    printf("Average is = %lf\n\n",average);
    return 0;
}