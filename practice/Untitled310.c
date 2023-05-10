#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("enter num");
	scanf("%d",&n);
		
	for(i=-n;i<=n;i++)
	{
			if(i=0)
			
				k=-i;
			
			else
			
				k=i;
			
			for(j=0;j<n+1;j++)
			{
				if(j<n-k)
				{
					printf(" ");
				}
				else
				{
					printf("* ");
				}
			}
			printf("\n");
		
	
	}
}
