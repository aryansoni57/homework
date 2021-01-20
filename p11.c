#include<stdio.h>

int main()
{
    float f,c,faren,cel;
    printf("Please enter the value of farenhite and celcius\n");
    scanf("%f%f",&f,&c);
    faren=(c*9/5)+32;
    cel=(f-32)*5/9;
    printf("The value of farenhite =%f\n",faren);
    printf("The value of celcius =%f\n",cel);
    return 0;
}