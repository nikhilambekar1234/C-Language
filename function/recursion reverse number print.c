#include<stdio.h>
int fun(int n) //function defination
{
	if(n==0) //base condition
	{
		
	    return;
	}
	else
	{
		printf("%d\n",n*n);
		return fun(n-1); //recusive function call
	}
}
void main()
{
	int n,i;
	printf("enter num");
	scanf("%d",&n);

	fun(n);
	
}
