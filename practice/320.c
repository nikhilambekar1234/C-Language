#include<stdio.h>
void main()
{	int arr[3][3],i,j,result,n,sum1,sum2;
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
	n=arr[0][0];
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
	    {
	      if(i==j)
	      {
	  	    	sum1=arr[i][j];
	      }
	      else if(i+j==2)
	      
	        	sum2=arr[i][j];
	      
        }
    }

	if(sum1==sum2)
	{
		printf("same diagonal");
	}
	else
	{
		printf("not same diagonal");
    }
}
	
           
