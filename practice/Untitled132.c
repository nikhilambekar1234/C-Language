#include<stdio.h>
int fun(int n)
{
	int mult;
	static int a=1;
	mult=n*a;
	printf("%d\n",mult);
	a++;
	
	if(a<=10)
	{
	  fun();	
	}
	
	
}
void main()
{
	int n;
	printf("enter num");
	scanf("%d",&n);
	fun(n);
}
