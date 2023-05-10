#include<stdio.h>
void main()
{
	int i=1,n,count=0;
	printf("Enter no:");
	scanf("%d",&n);
	while(i<=n)
	{
		count+=i;
		i++;
	}
	printf("%d\n",count);
	if(count%2==0)
	{
		printf("Addition of all no is EVEN");
	}
	else
	{
		printf("Addition of all no is ODD");
	}
}
