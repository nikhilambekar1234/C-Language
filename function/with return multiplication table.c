#include<stdio.h>
int multiplication()
{
	int i=1,n;
	printf("Enter no:");
	scanf("%d",&n);
	return n;
	
}
void main()
{
	int i=1,n;
    n=	multiplication();
    for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
}
