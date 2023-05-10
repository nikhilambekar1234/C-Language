#include<stdio.h>
void main()
{
	int i,j,n,no=1;
	printf("Enter no:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j==1||i==j||i==n)
			{
				printf("%d\t",no);
			
			}
			else
			{
				printf("*\t");
			}
				no++;
		}
		printf("\n\n");
	}
}
