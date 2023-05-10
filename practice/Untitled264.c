#include<stdio.h>
void main()
{
	int arr[3][3],i,j;
	printf("Enter arr");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("positive element\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j>0])
			{
				printf("%d\t",arr[i][j]);
			}
		}
	}
	printf("\nNegative element\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]<0)
			{
				printf("%d\t",arr[i][j]);
			}
		}
	}
}
