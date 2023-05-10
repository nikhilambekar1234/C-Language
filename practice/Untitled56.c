#include<stdio.h>
void main()
{
	int row,col,n,no=1;
	printf("Enter no:");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%d\t",no%2);
			no++;
		}
		printf("\n\n");
	}
}
