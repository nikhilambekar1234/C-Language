#include<stdio.h>
void main()
{
	int row,col,n,no=1;
	printf("Enter no:");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=row;col++)
		{
		   if(col==1||row==n||col==row)
		   {
		   	printf("%d",no);
		   }
		   else
		   {
		   	printf(" ");
		   }
		}
		no++;
		printf("\n");
	}
}
