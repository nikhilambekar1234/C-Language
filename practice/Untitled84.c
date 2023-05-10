#include<stdio.h>
void main()
{
	int row,star,n,space,no=1;
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
		  	if(row%2!=0)
	    	{
	    		printf("%d ",no);
		  	}
			else
			{
				printf("%c ",ch);
		  	}
	    }
	    if(row%2!=0)
		{
			no++;
		}
		else
		{
			ch++;
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
	    	if(row%2!=0)
	    	{
	    		printf("%d ",no);
		  	}
			else
			{
				printf("%c ",ch);
		  	}
	    }
	   	if(row%2!=0)
		{
			no++;
		}
		else
		{
			ch++;
		}
		printf("\n");
	}
}
