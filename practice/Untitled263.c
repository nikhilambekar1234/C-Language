#include<stdio.h>
void main()
{
	int arr[3][3],i,j;
	printf("enter array");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]%2==0)
			{
				printf("even=%d\n",arr[i][j]);
			}
			else
			{
				printf("odd=%d\n",arr[i][j]);
			}
		}
	}
}
