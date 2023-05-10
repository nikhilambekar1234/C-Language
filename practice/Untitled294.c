#include<stdio.h>
void main()
{
	int arr[3][3],i,j,k,l,m,temp=0;
	printf("enter arr\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nArray\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n left rotate Arr\n");
	for(m=1;m<=2;m++)
	{
	    temp=arr[0][0];
	    for(i=0;i<2;i++)
    	{
		    for(j=0;j<2;j++)
		    {
			   arr[k][l]=arr[i][j];
			   j++;
	    	}
	    	i++;
        }
		arr[k][l]=temp;	
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr[k][l]);
		}
		printf("\n");
	}
	
	
}
