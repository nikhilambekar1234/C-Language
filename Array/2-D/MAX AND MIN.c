#include<stdio.h>
void main()
{
	int arr[3][3],i,j,max=0,min=0,temp=0;
	printf("enter arr");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	max=arr[0][0];
	min=arr[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]>max)
			{
				
				max=arr[i][j];
			}
			else if(arr[i][j]<min)
			{
				
				min=arr[i][j];
			}
		}
	}
	printf("max=%d\n",max);
	printf("min=%d\n",min);
	
}
