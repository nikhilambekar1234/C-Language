#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||j==1||i==n||i==(n/2)+1)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
