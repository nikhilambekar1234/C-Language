#include<stdio.h>
void main()
{
	int arr[10],i,max=0,smax=0;
	printf("enter num");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]>max)
		{
			smax=max;
			max=arr[i];
		}
		if(arr[i]>smax && max!=arr[i])
		{
			smax=arr[i];
		}
	}
	printf("max=%d\n",max);
	printf("smax=%d\n",smax);
}
