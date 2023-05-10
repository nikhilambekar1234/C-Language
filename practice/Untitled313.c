#include<stdio.h>
int fun(int i,int n)
{
	if(i<=n)
	{
		printf("%d\n",i);
		fun(i+1,n);
	}
}
void main()
{
	int n,i=1;
	printf("enter num");
	scanf("%d",&n);
	
	fun(i,n);
	
}
