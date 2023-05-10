#include<stdio.h>
void main()
{	int arr1[3][3],arr2[3][3],mult[3][3],i,j;
	printf("Enter first array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&arr1[i][j]);
	}
	printf("arr1\n");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	  	printf("%d\t",arr1[i][j]);
	  }
	  printf("\n");
	}
	printf("Enter second array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&arr2[i][j]);
	}
	printf("arr2\n");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  { 
	  	printf("%d\t",arr2[i][j]);
	  }
	  printf("\n");
	}
	printf("mult\n");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	  	mult[i][j]=arr1[i][j]*arr2[j][i];
	  	printf("%d\t",mult[i][j]);
	  }
	  printf("\n");
	}
}
