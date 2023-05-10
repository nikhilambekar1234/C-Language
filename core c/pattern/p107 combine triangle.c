#include<stdio.h>
void main()
{
	int row,star,n,space;
	char ch='A';
	printf("enter no");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(space=1;space<=(n-row);space++)
		{
			printf(" ");
		}
		for(star=1;star<=row;star++)
	    {
		  	printf("* ");
	    }
		printf("\n");
	}
	for(row=1;row<=n;row++)
	{
		for(space=1;space<row+1;space++)
		{
			printf(" ");
		}
		for(star=1;star<=(n-row);star++)
	    {
		  	printf("* ");
	    }
		printf("\n");
	}
}
