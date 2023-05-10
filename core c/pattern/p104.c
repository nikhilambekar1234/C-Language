#include<stdio.h>
void main()
{
	int row,star,n,space;
	printf("enter no");
	scanf("%d",&n);
	for(row=n;row>=1;row--)
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
