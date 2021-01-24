#include<stdio.h>

int main()
{
	int i,num,count=0;
	scanf("%d",&num);
	for(i=1; i<=num; i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("It is a prime");
	}
	else
	{
		printf("It is not a prime");
	}
	return 0;
}
