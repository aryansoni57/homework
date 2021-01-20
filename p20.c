#include<stdio.h>

int main()
{
    int a=20,b=10,c;
    c=b;
    b=a;
    a=c;
    printf("a=%i\t,\tb=%i\n\n",a,b);
}