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
		   if(row%2==0)
		   {
		   	printf("*\t");
		   	no++;
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
