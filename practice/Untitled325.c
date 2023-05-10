#include<stdio.h>
void add(int x)
{
	printf ("x=%d\n",x);
	(x)+=5;
	printf("x=%d\n",x);
}
void main()
{
	int a=10;
	printf("a=%d\n",a);
	add(a);
	printf("a=%d\n",a);
}
