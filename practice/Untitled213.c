#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("enter num");
	scanf("%d",&n);
	
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
    
}
