#include<stdio.h>
void maxmin(int a,int b)
{
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
	int a,b;
	printf("Enter the two no:");
	scanf("%d%d",&a,&b);
	maxmin(a,b);
}
