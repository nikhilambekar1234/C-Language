#include<stdio.h>
void main()
{
	int i=10,n;
	printf("Enter no:");
	scanf("%d",&n);
	
	while(i>=1)
	{
		printf("%d*%d=%d",n,i,n*i);
		i--;
	}
}
