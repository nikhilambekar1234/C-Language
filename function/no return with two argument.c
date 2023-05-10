#include<stdio.h>
void add(int a,int b)
{
	int sum;
	sum=a+b;
	printf("sum=%d",sum);
}
void main()
{
	int n,m;
	printf("enter first no");
	scanf("%d",&n);
	printf("enter second no");
	scanf("%d",&m);
	add(n,m);
	
}
