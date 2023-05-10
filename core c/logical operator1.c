#include<stdio.h>
void main()
{
	int n;
	printf("enter no:");
	scanf("%d",&n);
	
	if(n%5==0  &&   n%7==0)
	{
		printf("condition satisfied");
	}
	else
	{
		printf("condition not satisfied");
	}
		
	
}
