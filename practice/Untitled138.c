#include<stdio.h>
int prime( n)
{
	static int i=1,count=0;
	if(i<=n)
	{
		if(n%i==0)
		{
			count++;
		}
		if(count==2)
		return 1;
		if(count!=2)
		return 0;
		
	    return prime(n,i+1);
		
	}
	    	
}
void main()
{
	int n,result;
	printf("enter num");
	scanf("%d",&n);
	if(n==0||n==1)
	printf("not prime num=%d",n);
	
	result=prime(n,n/2);
	if(result==1)
	{
		printf("prime num=%d",n);
	}
	else
	{
		printf("not prime num=%d",n);
	}	
}
