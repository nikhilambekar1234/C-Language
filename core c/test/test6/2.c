#include<stdio.h>
void main()
{
	int i,j,k,n,no=1;
	printf("Enter no:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i);j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d ",no);
			no++;
		}
		no--;
		printf("\n");
	}
	
}
