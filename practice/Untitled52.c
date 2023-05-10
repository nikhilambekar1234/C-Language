#include<stdio.h>
void main()
{
	int row,col,n;
	char ch;
	printf("Enter no:");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		ch=64+row;
		for(col=1;col<=row;col++)
		{
			printf("%c\t",ch);
			ch++;
		}
		printf("\n\n");
	}
}
