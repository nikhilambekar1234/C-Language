#include<stdio.h>
void main()
{
	int arr[6],i,j,k,temp;
	printf("enter times of rotation");
	scanf("%d",&k);
	printf("enter element");
	for(i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(j=1;j<=k;j++)
	{
		temp=arr[6-1];
		for(i=6-1;i>=1;i--)
		{
			arr[i]=arr[i-1];
		}
		arr[i]=temp;
	}
	for(i=0;i<6;i++)
	{
		printf("%d\t",arr[i]);
	}
}
