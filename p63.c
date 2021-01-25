//WRITE THE PROGRAM TO PRINT FIBONACCI SERIES WHERE RANGE GIVEN BY USER
#include<stdio.h>
#include<math.h>
#include<tgmath.h>
#include<stdlib.h>
int main ()
{
int b;
printf("enter the range of fibonaaci series = ");
scanf("%d",&b);


for (int i = 0; i<b;i++){
  double a =  (pow((1+sqrt(5))/2,i)-pow((1-sqrt(5))/2,i))/sqrt(5);

   //float a =  pow((float)6,(float)4);
    printf("%.2lf\n",a);
}
    return 0;
}
