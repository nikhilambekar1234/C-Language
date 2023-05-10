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
	       if(row==1)
	       {
	       	printf("1");
		   }
		   else if(row==n)
		   {
		   	printf("2");
		   }
		   else
		   {
		   	printf("%c",ch);
		   	ch++;
		   }
	    }
	    printf("\n");
	}
}
