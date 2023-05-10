#include<stdio.h>
void main()
{
	const int a=10;
	int *ptr=&a;
	printf("a=%d\n",a);
	(*ptr)++;
	printf("a=%d\n",a);
}
