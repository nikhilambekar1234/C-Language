#include<stdio.h>
void main()
{
	int arr[10],i,j,count;
	printf("enter arr\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("uniqe element\n");
	for(i=0;i<10;i++)
	{
		count=0;
		for(j=i+1;j<10;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				
			}
		}
		if(count==0)
    	{
	     	printf("%d\n",arr[i]);
	    }
	}
	
}
