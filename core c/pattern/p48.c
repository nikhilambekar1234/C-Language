#include<stdio.h>
void main()
{
    char ch='a';
	int row,col,n,no=1;
	printf("enter no");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=n;col++)
		{
			if(col%2==0)
			{
				printf("%d",no);
				no++;
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
