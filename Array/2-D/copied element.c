#include<stdio.h>
void main()
{
	int arr1[3][3],arr2[3][3],i,j;
	printf("enter arr1");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("\narr1\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
	    	printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n copy element arr1 to arr2...\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			arr2[i][j]=arr1[i][j];
		}
	}
	printf("\ncopied arr\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}
	
}
