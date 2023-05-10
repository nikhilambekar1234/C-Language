#include<stdio.h>
int main()
{
	int row,col,n,no=0;
	char ch=65;
	printf("Enter no:");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=row;col++)
		{
		    printf("%d\t",(char ch));
		    ch++;
		    
		}
		ch=ch-64;
		
		printf("\n\n");
	}
	return 0;
}
