#include<stdio.h>

int main()
{
    int a=0,b=1,c,num;
    scanf("%i",&num);
    printf("0\n1\n");
    for (int i = 0; i < num ; i++)
    {
        c = a+b;
        printf("%i\n",c);
        a = b;
        b = c;
    }
    return 0;
}