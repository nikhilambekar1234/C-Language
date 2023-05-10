#include<stdio.h>
int prime()
{
	int i=1,count=0,n,result;
	printf("Enter no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	return count;
}
void main()
{
	int count;
	count=prime();
	if(count==2)
	{
		printf("prime no");
	}
	else
	{
		printf("not prime no");
	}
}
