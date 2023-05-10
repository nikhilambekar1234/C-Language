#include<stdio.h>
void main()
{
	int  n,i,j,k,no;
	printf("enter num:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i)+1;j++)
		{
			printf("*\t");
		}
		for(k=1;k<i;k++)
		{
			printf("\t");
		}
		for(k=1;k<i;k++)
		{
			printf("\t");
		}
		for(j=1;j<=(n-i)+1;j++)
		{
			printf("*\t");
		}
		printf("\n\n");
		
	}
}
