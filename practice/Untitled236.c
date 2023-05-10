#include<stdio.h>
void main()
{
	int arr[5],i,j,max,temp=0;
	printf("enter arr");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		if(arr[i]<arr[j])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
		printf("%d\t",arr[i]);
	}
	

}
