#include<stdio.h>
void main()
{
	int arr[3][3],i,j,count;
	printf("enter arr");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("count duplicate element\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]==arr[i][j])
			{
				count++;
			}
		}
	}
	printf("%d",count);	
}
