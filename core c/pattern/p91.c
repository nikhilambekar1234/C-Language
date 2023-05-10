#include<stdio.h>
void main()
{
	int i,j,n,no=1;
	printf("enter no");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",no);
			no++;
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i)+1;j++)
		{
			printf("%d",no);
			no++;
		}
		printf("\n");
	}	
}
