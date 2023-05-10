#include<stdio.h>
int main()
{
	int arr[10],i,j,count;
	printf("enter element");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("duplicate element");
	{
		for(i=0;i<10;i++)
		{
			count=1;
			for(j=i+1;j<10;j++)
			{
				if(arr[i]==arr[j])
				{
					count=count+1;
				}
			}
			if(count>1)
			{
				printf("%d=%d times\n",arr[i],count);
			}
		}
	}
	return 0;
}
