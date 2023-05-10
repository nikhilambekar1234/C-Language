#include<stdio.h>
int fibonacci(n)
{
	if(n==0)
	return 0;
	
	else if(n==1)
	return 1;
	
	else
	return fibonacci(n-1)+fibonacci(n-2);
}
void main()
{
	int n,i,fib;
	printf("enter num");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		fib=fibonacci(i);
		printf("%d\n",fib);
	}
}
