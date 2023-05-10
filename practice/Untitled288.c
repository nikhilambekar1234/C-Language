#include<stdio.h>
void main()
{
	int arr[3][3],i,j;
	printf("enter element\n");
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
	printf("\nnegative element\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]<0)
			{
				printf("%d\t",arr[i][j]);
			}
			else
			{
				printf("\t");
			}
		}
		printf("\n");
	}
}
