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
		for(star=1;star<=(2*row)-1;star++)
	    {
	    	if(row%2!=0)
	    	{
	    		printf("%c",ch);
		  	    ch++;
			}
			else
			{
				printf("%d",no);
				no++;
		  	    
			}
		}
	
		printf("\n");
	}
	for(row=1;row<=n;row++)
   	{
		for(space=1;space<=row;space++)
		{
			printf(" ");
		}
		for(star=1;star<=(2*(n-row)-1);star++)
	    {
	    	if(row%2!=0)
	    	{
	    		printf("%c",ch);
		  	    ch++;
			}
			else
			{
				printf("%d",no);
				no++;
		  	    
			}
		
	    }
	    
		printf("\n");
	}
}
