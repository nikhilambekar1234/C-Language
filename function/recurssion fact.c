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
	printf("fact of 5=%d",fact(5));
}
