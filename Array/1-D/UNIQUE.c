#include<stdio.h>
void main()
{
	int arr[10],i,j,flag=0;
	printf("enter arr\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("UNIQUE element\n");
	for(i=0;i<10;i++)
	{
		flag=0;
		for(j=i+1;j<10;j++)
		{
			if(arr[i]==arr[j]&& arr[i]!=0)
			{
				arr[j]=0;
			   flag=1;
			}
		}
		if(flag==0 && arr[i]!=0 )
    	{
	     	printf("%d\n",arr[i]);
	    }
	}
	
}
