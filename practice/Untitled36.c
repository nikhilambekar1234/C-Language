#include<stdio.h>
void main()
{
	int row,col,n,ch;
	
	printf("Enter no:");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=n;col++)
		{
			
			printf("%c\t",(char)(64+row+col-1));
			
			
			
		}
		printf("\n\n");
	}
}
