#include<stdio.h>
int evenodd()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	return a;	
}
void main()
{
	int a;
	a=evenodd();
	if(0==a%2)
	{
		printf("Given number is even=%d",a);
	}
	else
	{
		printf("Given number is odd=%d",a);
	}
	
}
