#include<stdio.h>
void main()
{
	int i,n,j,k;

	
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf(" ");
			
		}
		for(k=1;k<=8;k++)
		{
			if(k==2||k==4)
			{
				printf("* ");
				
			}
			
			
		}
		printf("\n");
	}
}
