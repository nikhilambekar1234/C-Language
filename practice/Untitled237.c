#include<stdio.h>
void main()
{
	int arr[10],i,n,result;
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter num\n");
	scanf("%d",&n);

	for(i=0;i<10;i++)
	{
		if(arr[i]==n);
		{
			result=1;
			break;
		}
		
	}
	if(result==1)
	{
		printf("%d",n);
	}
	else
	{
		printf("not");
	}
	
}
