#include<stdio.h>
int fact(int n)
{
	if(n==0)
	return 0;
	
	else if(n==1)
	return 1;
	
	else
	return n*fact(n-1);
	
}
void main()
{
	int n;
	printf("enter num");
	scanf("%d",&n);
	printf("fact of n=%d",fact(n));
}
