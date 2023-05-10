#include<stdio.h>
void main()
{
	int arr[10],i,temp;
	
	printf("enter element\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf(" array\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\nreverse element\n");
	for(i=9;i>=0;i--)
	{
		printf("%d\t",arr[i]);
	}
	
}
