#include<stdio.h>
int fact(n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
void main()
{
	int n,f;
	printf("enter num");
	scanf("%d",&n);
	f=fact(n);
	printf("%d",f);
}
