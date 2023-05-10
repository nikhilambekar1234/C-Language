#include<stdio.h>
void maxmin()
{
	int a,b;
	printf("Enter the two no:");
	scanf("%d%d",&a,&b);
	
	if(a>b)
	{
		printf("MAX NO:%d",a);
	}
	else
	{
		printf("MIN NO:%d",a);
	}
}
void main()
{
	maxmin();
}
