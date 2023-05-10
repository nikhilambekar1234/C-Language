#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);

	
	if(0==a%2)
	{
		printf("Given number is even=%d",a);
	}
	else
	{
		printf("Given number is odd=%d",a);
	}
}
