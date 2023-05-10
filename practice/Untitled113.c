#include<stdio.h>
void main()
{
	int i,n,j,k;
	
	
	for(i=1;i<=1;i++)
	{
		for(j=1;j<=(5-i);j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=3;i<=5;i++)
	{
		for(j=1;j<=(5-i);j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=3;i<=5;i++)
	{
		for(j=1;j<=(5-i);j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf(" ");
		}
		for(k=1;k<=5;k++)
		{
			printf("\n");
		}
		printf("\n");
	}
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf(" ");
			
		}
		for(k=1;k<=2;k++)
		{
			if(k==2||k==4)
			{
				printf("* ");
			}
		}
		printf("\n");
	}
}
