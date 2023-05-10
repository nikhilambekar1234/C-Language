#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	if(n%2==0  &&  n>=0)
	{
		printf("Given number is positive even");
	}
	else
	{
		printf("Given number is not positive even");
	}
}
