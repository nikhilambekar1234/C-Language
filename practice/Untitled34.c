#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("Enter no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",j);
		}
		for(k=n-1;k>=i;k--)
		{
			printf("*\t");
		}
		printf("\n\n");		
	}
}
