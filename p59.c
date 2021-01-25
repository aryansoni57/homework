//write the program to calulate arithematic operation between 2 number
#include<stdio.h>
int main ()
{
char a ;
int b , c;
printf("enter numbers = ");
scanf("%d %d", &b, &c);
printf(" enter a for add , s for subtract , m for mutiply , d for divide ");
scanf(" %c",&a);
if (a =='a')
{
    int d = b+c;
    printf("addition of two number = %d", d); 
}
if (a =='s')
{
    int d = b-c;
    printf("subtraction of two number = %d", d); 
}
if (a =='m')
{
    int d = b*c;
    printf("mutiplication of two number = %d", d); 
}
if (a =='d')
{
    int d = b/c;
    printf("divison of two number = %d", d); 
}
return 0;

}
