#include<stdio.h>
void main()
{
	int arr[3][3],i,j,min=32767,smin=32768;
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
			if(arr[i][j]<min)
			{
				smin=min;
				min=arr[i][j];
			}
			else if(arr[i][j]<smin && arr[i][j]!=min)
			{
				smin=arr[i][j];
			}
		}
	}
	printf("min=%d\n",min);
	printf("smin=%d",smin);
}
