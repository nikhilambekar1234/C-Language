#include<stdio.h>
void main()
{
	int arr[3][3],i,j,n,count=0;
	printf("enter num");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("enter num");
	scanf("%d",&n);
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]==n)
			count++;
		}
	
	}
	printf("%d=%d times",n,count);
}
