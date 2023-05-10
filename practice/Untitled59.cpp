#include<stdio.h>
int main()
{
	int row,col,n,no=0;
	char ch='A';
	printf("Enter no:");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=row;col++)
		{
			if((row+col)%2==0)
		    {
		    	printf("%c\t",ch);
		    	
			}
			else
			{
				no++;
				printf("%d\t",no);
				ch++;
			}
			
		}
		
		printf("\n\n");
	}
	return 0;
}
