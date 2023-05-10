#include<stdio.h>
void main()
{
	int row,col,n,m=1,temp=1;
	printf("Enter no:");
	scanf("%d",&n);

    for(row=1;row<=n;row++)
	{
		m=temp;   
		for(col=1;col<=n;col++)
		{
			printf("%d\t",m);
		    temp=m;
		   	m++;
		}
		printf("\n\n");			
	}	
}
