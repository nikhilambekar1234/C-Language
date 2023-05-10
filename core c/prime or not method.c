#include<stdio.h>
void main()
{
	int i=1,count=0,n;
	printf("Enter no:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(n%i==0)
		{
			count++;
		}
		i++;
	}
	if(count==2)
	{
		printf("prime no=%d",n);
	}
	else
	{
		printf("not prime=%d",n);
	}
}
