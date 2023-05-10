#include<stdio.h>
void main()
{
	int row,col,n,no=1;
	char ch='A';
	printf("Enter no:");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=row;col++)
		{
			if(col%2==0)
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
