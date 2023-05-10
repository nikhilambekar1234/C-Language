#include<stdio.h>
void main()
{
    char ch='A';
	int row,col,n;
	printf("enter no");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		ch='A';
		for(col=1;col<=n;col++)
		{
			printf("%c",ch);
			ch++;
		}
		printf("\n");	
	}
}
