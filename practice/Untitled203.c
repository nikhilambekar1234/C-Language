#include<stdio.h>
int upper(int arr1[3][3])
{
	int i,j,result;
	
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
	  { 
	    if((arr1[1][0])==0&&(arr1[2][0])==0&&(arr1[2][1])==0)
	    
	    	result=1;
	  }
	}
	if(result==1)
	{
	    printf("upper matrix");
	}
	else
	{
		printf("not upper matrix");
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
