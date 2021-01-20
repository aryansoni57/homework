#include<stdio.h>

int main()
{
    int num;
    scanf("%i",&num);
    if(num>0)
    {
        printf("number is positive");
    }
    else if (num==0)
    {
        printf("number is zero");
    }
    else
    {
        printf("number is negative");
    }
    return 0;
}