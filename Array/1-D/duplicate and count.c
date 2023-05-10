#include<stdio.h>
void main()
{
	int arr[10],arr1[10],i,j,flag=0,temp=0;
	printf("enter arr\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("duplicate element\n");
	for(i=0;i<10;i++)
	{
		temp=arr[i];
		for(j=i+1;j<10;j++)
		{
			if(arr[i]==arr[j] && arr[i]!=0)
			{
				arr[i]=0;
				printf("duplicate=%d\n",temp);
			   
			}
			else if(temp==arr[j])
			{
				arr[j]=0;
			}
		}
		
	}
	
}
