#include<stdio.h>
void main()
{
	int i,n,count=0;
	printf("Enter num:");
	scanf("%d",&n);
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("prime");
	}
	else
	{
		printf("not");
	}
}
