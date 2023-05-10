#include<stdio.h>
void main()
{
	int arr[3][3],i,j,max=0,smax=0;
	printf("enter arr");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]>max)
			{
				smax=max;
				max=arr[i][j];
			}
			else if(arr[i][j]>smax && arr[i][j]!=max)
			{
				smax=arr[i][j];
			}
		}
	}
	printf("max=%d\n",max);
	printf("smax=%d",smax);
}
