#include<stdio.h>
void main()
{
	int row,col,n;
	char ch='z';
	printf("Enter no:");
	scanf("%d",&n);
    for(row=1;row<=n;row++)
	{
		for(col=1;col<=n;col++)
		{
		    printf("%c\t",ch);
		   	ch--;
		}
		printf("\n\n");
	}	
}
