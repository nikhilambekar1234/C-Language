#include<stdio.h>
void main()
{
	int arr[10],i,temp;
	int half=10/2;
	printf("enter element\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<half;i++)
	{
		temp=arr[i];
		arr[i]=arr[10-i-1];
		arr[10-i-1]=temp;
	}
	printf("reverse element\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}
}
