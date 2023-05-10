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
			if(row%2==0 && col%2==0)
		    {
		    	printf("@\t");
			}
	        else if(row%2!=0 && col%2!=0)
			{
				printf("1\t");
			}
			else if(col%2==0 && row%2!=0)
			{
				printf("0\t");
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n\n");
	}
}
