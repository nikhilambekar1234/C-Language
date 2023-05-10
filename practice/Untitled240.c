#include<stdio.h>
void main()
{
	int arr[10],i,n,count=0;
	printf("enter arr");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter num");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(arr[i]==n)
		{
			count++;
		    
		}
		
	}
	if(count<=10)
	{
		printf("%d=%d times",n,count);
	}
}
