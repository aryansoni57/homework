//write the program to count of digit of given integer num
#include<stdio.h>
int main ()
{
    int a , b;
    printf("enter the number =");
    scanf("%d",&a);
    while(a>0)
    {
        a = a/10;
         b++;
    }
    printf("the number of digit = %d",b);
    return 0;
}
