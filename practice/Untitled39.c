#include<stdio.h>
void main()
{
	int row,col,n;
	char ch='A';
	printf("Enter no:");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=row;col++)
		{
		   if(row%2==0)
		   {
		   	printf("%c\t",ch);
		   	ch++;
		   }
		   else
		   {
		   	printf("*\t");
		   }
		}
		printf("\n\n");
	}
}
