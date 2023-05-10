#include<stdio.h>
void main()
{	int arr1[3][3],i,j,result;
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
	
	
	printf("received num\n");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  { 
	    if(i==j && arr1[3][3]==const)
	    
	    	result=1;
	  } 
	}
	if(result==1)
	{
	    printf("same digonal matrix");
	}
	else
	{
		printf("not same digonal matrix");
	}
	

}
