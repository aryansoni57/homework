#include<stdio.h>

int main()
{
	int sum=0;
	int i,n;
	scanf("%d",&n);
	if (n%2==0)
	{
		for(i=1; i<=n; i++)
		{
			sum=sum+i;
	    }
		printf("Sum of %d even natural numbers=%d",n,sum);
	}
	return 0;
}
