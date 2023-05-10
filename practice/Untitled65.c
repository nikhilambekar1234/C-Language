#include<stdio.h>
void main()
{
	int i,j,n,no=1;
	printf("Enter no:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				printf("*\t");
			}
			else
			{
				printf("%d\t",no);
				
			}
			no++;
		}
		printf("\n\n");
	}
}
