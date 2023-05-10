#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("enter num");
	scanf("%d",&n);
		
	for(i=0;i<=n;i++)
	{
		for(j=-n;j<=n;j++)
		{
			if(-(n-i)<j && j<(n-i))
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
