#include<stdio.h>
int add()
{
	int a,b,sum;
	printf("enter two no");
	scanf("%d%d",&a,&b);
	sum=a+b;
	
	return sum;
}
void main()
{

    printf("result sum=%d",add());
	
}
