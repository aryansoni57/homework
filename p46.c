#include<stdio.h>

int main()
{
	int n,sum=0,temp,r;
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	n=temp;
	if(n==sum)
	{
		printf("The number is armstrong");
	}
	else
	{
		printf("the number is not an armstrong");
	}
	return 0;
}
