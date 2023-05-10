#include<stdio.h>
void prime(int a)
{
	int i=1,count=0;
	
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			count++;
			break;
		}
	}
	if(count==0)
	{
		printf("prime no=%d\n",a);
	}
	else
	{
		printf("not prime no=%d",a);
	}
}
void main()
{
	int n;
	printf("Enter no:");
	scanf("%d",&n);
	prime(n);
}
