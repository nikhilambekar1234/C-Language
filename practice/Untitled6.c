#include<stdio.h>
void main()
{
	int a;
	
	printf("Enter a single no:");
	scanf("%d",&a);
	printf("------------------------------------------\n");
	
	
	if(a>0)
	{
		printf("Given number is positive");
	}
	else
	{
		printf("Given number is negative");
	}
}
