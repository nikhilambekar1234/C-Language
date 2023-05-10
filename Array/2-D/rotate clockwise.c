#include<stdio.h>
void main()
{	int arr[3][3],i,j;
	printf("Enter num:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("received num\n");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	  	printf("%d\t",arr[i][j]);
	  }
	  printf("\n");
	}
	printf("rotate clockwise num\n");
	for(i=0;i<3;i++)
	{
	  for(j=2;j>=0;j--)
	  {
	  	printf("%d\t",arr[j][i]);
	  }
	  printf("\n");
	}
}
