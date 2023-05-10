#include<stdio.h>
void main()
{
	int arr[3][3],i,j,count=0,temp=0;
	printf("enter arr\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Even element\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]%2==0)
			{
				count++;
			}
		}
	}
	printf("%d\n",count);
	printf("\n Odd element\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]%2!=0)
			{
				temp++;
			}
		}
	}
	
	printf("%d\n",temp);
}
