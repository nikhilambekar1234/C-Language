#include<stdio.h>
void main()
{
	int row,col,n;
	char ch;
	printf("enter num");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		ch='A';
		for(col=1;col<=n;col++)
		{
			if(col%2==0)
			{
				printf("@");
			}
			else
			{
				printf("%c",ch);
				ch++;
			}
			
		}
		
		printf("\n");
	}
}
