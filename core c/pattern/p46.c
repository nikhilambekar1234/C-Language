#include<stdio.h>
void main()
{
	int row,col,n;
	printf("Enter no:");
	scanf("%d",&n);
    for(row=1;row<=n;row++)
	{
		for(col=1;col<=n;col++)
		{
			if(row==1||row==n||col==1||col==n)
			{
				printf("*\t");
			}
			else
			{
				printf("@\t");
			}
		}
		printf("\n");	
	}	
}
