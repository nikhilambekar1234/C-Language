#include<stdio.h>
int x=100;
void fun()
{
	static int a=10;
	a++;
	printf("%d\n",a);
	printf("x=%d\n",x);
}
void main()
{
	fun();
	fun();
	printf("x=%d",x);
	
}
