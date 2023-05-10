#include<stdio.h>
int add()
{
	int a,b,sum;
	printf("enter two no");
	scanf("%d%d",&a,&b);
	sum=a+b;
	return sum;
}
void evodd(int n)
{
	if(n%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}
void main()
{
	int result;
	result=add();
	

    printf("result sum=%d\n",result); 
    evodd(result);
	
}
