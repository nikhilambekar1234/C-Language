#include<stdio.h>
void main()
{
	int row,star,n,space,no=1;
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
		  		printf("* ");
			}
			else
			{
				printf("%d ",no);
				no++;
			}
	    }
		printf("\n");
	}
}
