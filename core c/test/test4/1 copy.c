#include<stdio.h>
void main()
{
	int i,j,n,half;
	
	kdn :
		half=(n/2);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||j==1||i==n||i==half+1)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	{
		printf("Enter no:");
     	scanf("%d",&n);
		goto kdn;
	}
}
