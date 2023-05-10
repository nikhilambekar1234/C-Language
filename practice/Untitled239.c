#include<stdio.h>
void main()
{
	int arr[5],i,n,result;
	printf("enter arr");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter num");
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		if(arr[i]==n)
		
			result=1;
		    break ;	
		
		
	}
	if(result==1)
	{
		printf("%d=%d",n,i+1);
	}
	else
	{
		printf("not");
	}
}
