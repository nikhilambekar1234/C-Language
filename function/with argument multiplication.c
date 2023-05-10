#include<stdio.h>
void multiplication(int n)
{
	int i=1;
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
}
void main()
{
	int n;
	printf("Enter no:");
	scanf("%d",&n);
	multiplication(n);
}
