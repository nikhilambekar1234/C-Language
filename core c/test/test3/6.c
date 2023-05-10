#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter no:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("sum=%d\n",sum);
	if(sum%2==0)
	{
		printf("EVEN");
	}
	else
	{
		printf("ODD");
	}
}
