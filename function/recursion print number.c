#include<stdio.h>
int fun(int i,int n) //function defination
{
	if(i<=n)
	{
		printf("%d\n",i);
		fun(i+1,n);//recusive function call
	}
}
void main()
{
	int n,i=1;
	printf("enter num");
	scanf("%d",&n);
	
	fun(i,n);
	
}
