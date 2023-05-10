#include<stdio.h>
void main()
{
	int row,star,n,m=1;
	printf("Enter no:");
	scanf("%d",&n);

    for(row=1;row<=n;row++)
	{
		for(star=1;star<=row;star++)
		{
			printf("%d\t",m);
		    m++;
     	}
		printf("\n\n");			
	}	
}
