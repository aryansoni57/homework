#include<stdio.h>

int main()
{
    int a[]={34,654,3242};
    int size = sizeof(a)/4;
    int biggest=a[0];
    for(int i = 0 ; i < size ;i++)
    {
        if (a[i]>biggest)
        {
            biggest=a[i];
        }
        
    }
    printf("%i",biggest);
    return 0;
}