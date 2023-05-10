#include<stdio.h>
void main()
{
	int a;
	printf("Enter a no:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("Given number is positive:%d",a);
	}
	else
	{
		printf("Given number is negative:%d",a);
	}
}
