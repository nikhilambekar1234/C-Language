#include<stdio.h>
void main()
{
	int arr[3][3],i,j,count=0,n;
	printf("enter arr");
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
			printf("search");
			break;
		}
	}
	if(arr[i][j]!=n)
	{
		printf("not search\n");
	}
	
}
