//write the program to identify + , - or zero by using switch
#include<stdio.h>
int main()
{
    int a;
    printf("enter the number ");
    scanf("%d",&a);
    switch(a>0)
    {
        case 1:
        printf("this is + number");
        break;
    }
        switch(a<=0)
        {
        case 1:
        printf("this is - number");
        break;
        case 0: 
        printf("this is zero ");
        }
    
    return 0;

    }
