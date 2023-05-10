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
	int n;
	printf("enter num");
	scanf("%d",&n);
	printf("fibonacci of n=%d",fibonacci(n));	
}
