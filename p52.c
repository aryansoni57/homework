//write the program to print number in triangle 
//1
//1 2
//1 2 3    //output 
//1 2 3 4
//1 2 3 4 5
#include<stdio.h>
int main ()
{
    int i , j;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
return 0;
}
