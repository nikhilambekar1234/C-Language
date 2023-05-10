#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",i+j-1);
		}
		printf("\n\n");
	}
}
