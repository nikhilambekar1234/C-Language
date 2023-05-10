#include<stdio.h>
int prime(int a)
{
	int i=1,count=0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			count++;
		}
	}
	return count;
}
void main()
{
	int count,n,a;
	printf("Enter no:");
	scanf("%d",&n);
	count=prime(n);
	if(count==2)
	{
		printf("prime no=%d\n",n);
	}
	else
	{
		printf("not prime no=%d",n);
	}
}
