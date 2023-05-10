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
		for(star=1;star<=(2*row)-1;star++)
	    {
		  	printf("*");
	    }
		printf("\n");
	}
}
