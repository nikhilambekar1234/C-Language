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
			printf("\t");
		}
		for(star=1;star<=(2*row)-1;star++)
	    {
	    	if(row%2!=0)
	    	{
	    		printf("%c\t",ch);
		  	    ch++;
			}
			else
			{
				printf("%d\t",no);
				no++;
		  	}
		}
	    printf("\n\n");
	}
	for(row=1;row<=n;row++)
   	{
		for(space=1;space<=row;space++)
		{
			printf("\t");
		}
		for(star=1;star<=(2*(n-row)-1);star++)
	    {
	    	if(row%2!=0)
	    	{
	    		printf("%c\t",ch);
		  	    ch++;
			}
			else
			{
				printf("%d\t",no);
				no++;
		  	}
	    }
	    printf("\n\n");
	}
}
