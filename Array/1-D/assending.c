#include<stdio.h>
void main()
{
	int arr[10],i,j,temp;
	printf("enter arr\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	printf("assend\n");
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[i]>arr[j])
	     	{  
		    	temp=arr[i];
		    	arr[i]=arr[j];
		    	arr[j]=temp;
			}
		}
		printf("%d\n",arr[i]);
	}
	
}
