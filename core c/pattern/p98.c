#include<stdio.h>
void main()
{
	int row,star,n,space,no=0,temp=0;
	printf("enter no");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		temp+=row;
		no=temp;
		for(space=1;space<=(n-row);space++)
		{
			printf(" ");
		}
		for(star=1;star<=row;star++)
	    {
		  	printf("%d",no);
		  	no--;
	    }
		printf("\n");
	}
}
