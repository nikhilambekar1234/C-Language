#include<stdio.h>
void positive(int a)
{
	if(a>0)
	{
		printf("Given number is positive:%d",a);
	}
	else
	{
		printf("Given number is negative:%d",a);
	}
}
void main()
{
	int a;
	printf("Enter a no:");
	scanf("%d",&a);
	positive(a);
}
