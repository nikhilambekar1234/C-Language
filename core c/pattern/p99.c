#include<stdio.h>
void main()
{
	int row,star,n,space,no=0,temp=0;
	char ch=65;
	printf("enter no");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		ch+=no;
		temp=ch;
		for(space=1;space<=(n-row);space++)
		{
			printf(" ");
		}
		for(star=1;star<=row;star++)
	    {
	    	printf("%c",temp);
	    	temp--;
    	}
    	no++;
		printf("\n");
	}
}
