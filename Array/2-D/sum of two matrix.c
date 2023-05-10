#include<stdio.h>
void main()
{	int arr1[3][3],arr2[3][3],sum[3][3],i,j;
	printf("Enter num:\n");
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
	printf("sum\n");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	  	sum[i][j]=arr1[i][j]+arr2[i][j];
	  	printf("%d\t",sum[i][j]);
	  }
	  printf("\n");
	}
	
	
	

}
