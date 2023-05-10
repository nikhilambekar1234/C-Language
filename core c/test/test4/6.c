#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter three sides of triangle:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a==b && b==c)
	{
		printf("Equilaterl triangle");
	}
	else if(a!=b && a!=c && b!=c)
	{
		printf("scalene triangle");
	}
	else
	{
		printf("iso triangle");
	}
}
