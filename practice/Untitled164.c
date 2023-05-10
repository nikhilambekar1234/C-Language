#include<stdio.h>
int upper(int arr1[3][3])
{
	int i,j;
	
	printf("arr1\n");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	  	printf("%d\t",arr1[i][j]);
	  }
	  printf("\n");
	}
	printf("upper matrix\n");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  { 
	    if(i<j || i==j)
	    {
	    	printf("%d\t",arr1[i][j]);
		}
		else
		{
			printf("\t");
		}
	  	
	  }
	  printf("\n");
	}
	
}
void main()
{
	int arr1[3][3],i,j;
	printf("Enter num:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&arr1[i][j]);
	}
	upper(arr1);
}
