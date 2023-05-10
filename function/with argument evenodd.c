#include<stdio.h>
void even(int a)
{
	if(0==a%2)
	{
		printf("Given number is even=%d\n",a);
	}
	else
	{
		printf("Given number is odd=%d\n",a);
	}
}
void main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	even(a);
}
