#include<stdio.h>
void main()
{
	int row,col,n,m=1;
	char ch='a';
	printf("Enter no:");
	scanf("%d",&n);
    for(row=1;row<=n;row++)
	{
		for(col=1;col<=n;col++)
		{
			if(row%2!=0)
			{
				printf("%c\t",ch);
				ch++;
			}
			else
			{
				printf("%d\t",m);
				m++;
			}
		}	
		printf("\n");
	}	
}
