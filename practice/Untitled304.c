#include<stdio.h>
void main()
{
	int arr[5],i,sum=0;
	int *ptr=arr;
	printf("enter num\n");
	for(i=0;i<5;i++)
	{
	   	scanf("%d",ptr+i);
	}
	for(i=0;i<5;i++)
	{
		sum+=*(ptr+i);
	}
	printf("sum=%d",sum);
}
