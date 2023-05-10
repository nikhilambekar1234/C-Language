#include<stdio.h>
void main()
{	int arr[3][3],i,j,count,temp;
	printf("Enter num:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&arr[i][j]);
	}
	printf("received num\n");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	  	  if(arr[i][j]==1 && i==j)
	      {
	      	count++;
	  	  }
	      else if(i!=j && arr[i][j]==0)
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
	
	


