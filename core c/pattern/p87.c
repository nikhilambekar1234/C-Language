#include<stdio.h>
void main()
{
	int row,star,n,space,no=1;
	char ch;
	printf("enter no");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		ch=64+row;
		for(space=1;space<=(n-row);space++)
		{
			printf(" ");
		}
		for(star=1;star<=row;star++)
	    {
	        printf("%c",ch);
		   	ch--;
	    }
	    printf("\n");
	}
}
