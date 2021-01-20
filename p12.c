#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    float p,r,amount,ci,si;
    printf("Enter time, principal amount, rate\n");
    scanf("%d%f%f",&t,&p,&r);
    si=(p*r*t)/100;
    printf("The simple intrest is =%.2f\n",si);
    amount=p*pow((1+r/100),t);
    ci=amount-p;
    printf("The amount is =%.2f\n",ci);
    return 0;
}