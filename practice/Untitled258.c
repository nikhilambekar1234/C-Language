#include<stdio.h>
void main()
{
	int  n,i,j,no,k;
	printf("enter num:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		no=i;
		for(j=1;j<=(n-i)+1;j++)
		{
			printf("%d",no);
			no++;
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		no=5;
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=(n-i)+1;k++)
		{
			printf("%d",no);
			no--;
		}
		printf("\n");
	}
}
