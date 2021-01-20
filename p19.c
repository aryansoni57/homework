#include<stdio.h>

int main()
{
    int a[]={34,654,3242,6,53,21};
    int size = sizeof(a)/4;
    int biggest=a[0];
    for(int i = 0 ; i < size ;i++)
    {
        a[i]>biggest?biggest=a[i]:NULL;
    }
    printf("%i",biggest);
    return 0;
}