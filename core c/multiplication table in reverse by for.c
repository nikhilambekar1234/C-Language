#include<stdio.h>
void main()
{
	int i=10,n;
	printf("Enter no:");
	scanf("%d",&n);
	for(i=10;i>=1;i--)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
}
