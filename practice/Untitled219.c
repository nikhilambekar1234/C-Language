#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter side");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a==b&&b==c)
	{
		printf("equilateral");
	}
	else if(a==b ||a==c||b==c)
	{
		printf("iso");
	}
	else
	{
		printf("scale");
	}
}
