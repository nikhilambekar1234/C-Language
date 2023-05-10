#include<stdio.h>
void main()
{	int arr[3][2][2],i,j,k;
	printf("Enter num:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
	    	{
		    	scanf("%d",&arr[i][j][k]);
	    	}
		}
	}
	printf("received num\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
	    	{
		    	printf("%d\t",arr[i][j][k]);
	    	}
	   	}
		printf("\n");
	}
} 
