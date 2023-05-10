#include<stdio.h>
void main()
{
	int arr[10],i,temp;
	printf("enter element");
	for(i=0;i<10;i++)
	{
		printf("%d",&arr[i]);
	}
	printf("reverse array");
	for(i=0;i<10/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[10-i-1];
		arr[10-i-1]=temp;
	}
	printf("%d\n",arr[i]);
}
