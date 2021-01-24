#include<stdio.h>

int main()
{
	int num;
	do
	{
		scanf("%i",&num);
		if(num%2==0)
		{
			printf("The given number is even");
		}
		else
		{
			printf("The given number is odd");
		}
	}
	while(num!=0);
	return 0;
}
