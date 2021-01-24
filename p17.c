#include<stdio.h>

int main()
{
	int a,b,lar;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	lar=(a>b)?a:b;
	printf("The largest number is=%d",lar);
	return 0;
}
