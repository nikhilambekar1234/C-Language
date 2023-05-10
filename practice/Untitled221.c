#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("enter num:");
	scanf("%d",&n);
	
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=4-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=4;k++)
		{
			if(k==1||k==3)
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
	for(i=3;i<=3;i++)
	{
		for(j=1;j<=1;j++)
		{
			printf("");
		}
		for(k=1;k<=4;k++)
		{
			
			printf("* ");
		}
		
		printf("\n");
	}
}
