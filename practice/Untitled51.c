#include<stdio.h>
void main()
{
	int row,col,n,no;
	printf("Enter no:");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		no=row;
		for(col=1;col<=row;col++)
		{
			printf("%d\t",no);
			no++;
		}
		printf("\n\n");
	
	}
}
