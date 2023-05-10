#include<stdio.h>
void main()
{
	int arr[10],i,j,count;
	printf("enter arr\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("duplicate element\n");
	for(j=0;j<10;j++)
	{
		count=1;
		for(i=j+1;i<10;i++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(count>1)
    	{
	     	printf("%d=%d\n",arr[i],count);
	    }
	}
	
}
