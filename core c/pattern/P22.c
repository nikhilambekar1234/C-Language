#include<stdio.h>
void main()
{
	int row,star,n,m=1;
	char ch='A';
	printf("Enter no:");
	scanf("%d",&n);
    ch='A';
    for(row=1;row<=n;row++)
	{
		for(star=1;star<=row;star++)
		{
			if(row%2==0)
			{
				printf("%d\t",m);		
			}
			
			else
			{
				printf("%c\t",ch);
			}
		}
		m++	;
		ch++;
		printf("\n\n");	
	}	
}
