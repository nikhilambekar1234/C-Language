#include<stdio.h>
void main()
{
	int row,col,k,n;
	printf("Enter no:");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%d\t",col);
		}
		for(k=n-1;k>=row;k--)
		{
			printf("*\t");
		}
		printf("\n\n");		
	}
}
