#include<stdio.h>
void main()
{
	int row,col,n,space;
	printf("Enter no:");
	scanf("%d",&n);
	
	for(row=1;row<=n;row++)
	{
		for(space=1;space<=(n-row);space++)
		{
			printf(" ");
		}
		for(col=1;col<=(2*row)-1;col++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(row=1;row<=n;row++)
	{
		for(space=1;space<=row;space++)
		{
			printf(" ");
		}
		for(col=1;col<=2*(n-row)-1;col++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}
