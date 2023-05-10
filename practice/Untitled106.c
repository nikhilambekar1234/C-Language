#include<stdio.h>
void main()
{
	int row,col,space,n;
	printf("Enter no:");
	scanf("%d",&n);
	
	for(row=1;row<=n;row++)
	{
		for(space=1;space<row;space++)
		{
			printf(" ");
		}	
		for(col=1;col<=(n-row)+1;col++)
		{
			printf("*");
		}
		
		printf("\n");
	}
}
