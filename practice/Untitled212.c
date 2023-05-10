#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("enter num");
	scanf("%d",&n);
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{ 
		    if(i==1)
			printf("* ");
		}
		printf("\n");
    } 
    for(i=3;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
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
		for(j=1;j<=5-i;j++)
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
		for(j=1;j<=6;j++)
		{
			if(j==4||j==6)
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
