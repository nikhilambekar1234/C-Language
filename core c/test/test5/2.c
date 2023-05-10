#include<stdio.h>
void main()
{
	int row,col,space,n;
	printf("enter no:");
	scanf("%d",&n);
	
	for(row=1;row<=n;row++)
	{
		for(space=1;space<=(n-row);space++)
		{
			printf(" ");
		}
		for(col=1;col<=row;col++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(row=1;row<=n;row++)
	{
		for(space=1;space<=(6+row);space++)
		{
			printf(" ");
		}
		for(col=1;col<=(n-row)+1;col++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
}
