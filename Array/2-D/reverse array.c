#include<stdio.h>
void main()
{
	int arr[3][3],i,j;
	printf("Enter arr\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\narr\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("\nreversre\n");
	for(i=2;i>=0;i--)
	{
		for(j=2;j>=0;j--)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
