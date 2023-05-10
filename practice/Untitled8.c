#include<stdio.h>
void main()
{
	int a ;
	printf("Enter an age of person:");
	scanf("%d",&a);
	
	if(a>=18)
	{
		printf("A person is eligible for vote");
	}
	else
	{
		printf("A person is Not eligible for vote");
	}
}
