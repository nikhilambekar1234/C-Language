#include<stdio.h>
void main()
{
	int i=1,n,count=0;
	printf("Enter no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		count+=i;
		
 	}
	printf("Addition of all no=%d\n",count);
	if(count%2==0)
	{    
		printf("Result is even");
	}
	else
	{
		printf("Result is Odd");
	}
	
	
}
