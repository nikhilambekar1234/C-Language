#include<stdio.h>
void main()
{
	int arr[10],i,j,count;
	printf("enter arr");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[10]);
	}
	printf("duplicate element\n");
	for(i=0;i<10;i++)
	{
		count=1;
		for(j=i+1;j<10;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
			else
			{
				break;
			}
			
		}
		if(count>1)
		{
		   printf("%d=%d times\n",arr[i],count);	
		}
		
	}
}
