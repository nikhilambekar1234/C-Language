#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("enter num:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<3+i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=n-i+1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
