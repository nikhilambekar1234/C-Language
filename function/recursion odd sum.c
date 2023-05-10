#include<stdio.h>
int oddsum(n)
{
	if(n==1||n==2)
	return 1;
	 
	else if(n%2==0)
	{
		n=n-1;
		return n+oddsum(n-2);
	}
	else
	return n+oddsum(n-2);	
}
void main()
{
	int n,sum;
	printf("enter num");
	scanf("%d",&n);
	sum=oddsum(n);
	printf("sum=%d",sum);	
}
