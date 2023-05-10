#include<stdio.h>
void prime(int n)
{
	int i=1,count=0;
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("prime no=%d\n",n);
	}
	else
	{
		printf("not prime no=%d",n);
	}
}
void main()
{
	int n;
	printf("Enter no:");
	scanf("%d",&n);
	prime(n);
}
