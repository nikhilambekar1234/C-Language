#include<stdio.h>
void main()
{	int arr1[3][3],arr2[3][3],sub[3][3],i,j,count=0,temp=0;
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
	printf("sub\n");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	  	sub[i][j]=arr1[i][j]-arr2[i][j];
	  	printf("%d\t",sub[i][j]);
	  }
	  printf("\n");
	}
	
	printf("received num\n");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	  	  if(sub[i][j]==1 && i==j)
	      {
	      	count++;
	  	  }
	      else if(i!=j && sub[i][j]==0)
	     {
	       	temp++;
	  	
	     }
	  }
    }
	if(count==3 && temp==6)
	{
		printf("identity matrix");
	}
	else
	{
		printf("not");
	}	
	

}
