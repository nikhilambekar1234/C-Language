#include<stdio.h>
void main()
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
