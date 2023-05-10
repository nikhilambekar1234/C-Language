#include<stdio.h>
void main()
{
	int n;
	printf("Enter a no:");
	scanf("%d",&n);
	
	if(n%5==0 &&  n%11!=0)
	{
		printf("condition satisfied");
	}
	
	else
	{
		printf("condition not satisfied");
	}
}
