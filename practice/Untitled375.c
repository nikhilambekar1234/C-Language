#include<stdio.h>
int fun(int n)
{
	if(n==0)
	return 0;
	
	else if(n==1)
	return 1;
	
	else
	return fun(n-1)+fun(n-2);
}
void main()
{
	int n,fib,i;
	printf("enter num\n");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		fib=fun(i);
	
    	printf("%d\n",fib);
	}
}
