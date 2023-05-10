#include<stdio.h>
int fun()
{
	static int a=1;
	printf("%d\n",a);
	a++;
	
	if(a<=10)
	{
	  fun();	
	}
	
	
}
void main()
{
	fun();
}
