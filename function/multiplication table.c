#include<stdio.h>
void multiplication()
{
	int i=1,n;
	printf("Enter no:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
}
void main()
{
	multiplication();
}
