#include<stdio.h>
void main()
{
	int n;
	printf("Enter percent:");
	scanf("%d",&n);
	if(n>100)
	{
		printf("wrong percent");
	}
	else if(n>60)
	{
		printf("Distinction");
	}
	else if(n>=35)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
}
