#include<stdio.h>
void main()
{
	int arr[10],i,j,count=0;
	printf("enter array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("duplicate element\n");
	for(i=0;i<10;i++)
	{
		
		for(j=i+1;j<10;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				break;
			}
			
		}
		
		
	}
	printf("%d",count);
	
}
