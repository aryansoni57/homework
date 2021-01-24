#include<stdio.h>

int main()
{
	int a,b,c,d,num;
	printf("Enter 4 numbers");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	num=a>b?a>c?a>d?a:d:c>d?c:d:b>c?b>d?b:d:c>d?c:d;
	printf("largest number=%d",num);
	return 0;
	
}
