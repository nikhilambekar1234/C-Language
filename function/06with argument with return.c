#include<stdio.h>
int add(int a,int b)
{
	int sum;
	sum=a+b;
	
	return sum;
}
void main()
{
	int n,m;
	printf("enter first no");
	scanf("%d",&n);
	printf("enter second no");
	scanf("%d",&m);
    printf("result sum=%d",add(n,m));
	
}
