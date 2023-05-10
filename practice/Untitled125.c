#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("enter n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=i;j<n;j++)
		{
			printf(" ");
		}
		for(k=1;k<=(2*i-1);k++)
		{
			if(k==1||k==(2*i-1)||i==n)
			{
				printf("*");
			}
			else
			{ 
				printf(" ");
			}
			
		}
	
		printf("\n");
	}
}
