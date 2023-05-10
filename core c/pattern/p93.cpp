#include<stdio.h>
int main()
{
	int i,j,n,no=1;
	printf("enter no");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("%d",no);
				no++;
			}
			else
			{
				printf("*");
			}	
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i)+1;j++)
		{
			if(j%2==0)
			{
				printf("%d",no);
				no++;
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}	
	return 0;
}
