#include<stdio.h>
int x=100;
void fun()
{
	auto int a=10;
	a++;
	printf("%d\n",a);
	printf("x=%d\n",x);
}
void main()
{
	fun();
	printf("x=%d",x);
	
}
