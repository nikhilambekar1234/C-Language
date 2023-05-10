#include<stdio.h>
void main()
{
	int row,star,n,m=1;
	char ch='A';
	printf("Enter no:");
	scanf("%d",&n);

    for(row=1;row<=n;row++)
	{
		ch='A';
		for(star=1;star<=row;star++)
		{
		    printf("%C\t",ch);
		    ch++;
		}
		printf("\n\n");			
	}	
}
