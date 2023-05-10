#include<stdio.h>
int fun(int i,int n)
{
	if(i==1)
	{
		printf("%d\n",i);
	    return;
	}
	else
	{
		printf("%d\n",i);
		return fun(i-1,n);
	}
}
void main()
{
	int n,i;
	printf("enter num");
	scanf("%d",&n);
	i=n;
	fun(i,n);
	
}
