#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter no:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("a is greater:%d",a);
	}
	else if(b>a && b>c)
	{
		printf("b is greater:%d",b);
	}
	else
	{
		printf("c is greater:%d",c);
	}
}
