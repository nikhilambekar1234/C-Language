#include<stdio.h>
void main()
{
	int n,i,count=0;
	printf("enter no:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==1)
	{
		printf("prime no");
	}
	else
	{
		printf("not prime no");
	}
}
