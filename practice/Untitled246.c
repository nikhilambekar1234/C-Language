#include<stdio.h>
void main()
{
	int arr[10],i,min=32766,smin=32767;
	printf("enter num");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]<min)
		{
			smin=min;
			min=arr[i];
		}
		if(arr[i]<min && min!=smin)
		{
			smin=min;
		}
	}
	printf("min=%d\n",min);
	printf("smin=%d\n",smin);
}
