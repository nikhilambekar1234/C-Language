#include<stdio.h>
int prime(int n,int i)
{
	if(i==1)
	return 1;
	if(n%i==0)
	return 0;
	return prime(n,i-1);	
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
