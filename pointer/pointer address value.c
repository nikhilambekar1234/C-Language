W#include<stdio.h>
void main()
{
	int a=10;
	int *ptr=&a;
	
	printf("a=%d\n",a);
	printf("&a=%d\n",&a);
	printf("ptr=%d\n",ptr);
	printf("&ptr=%d\n",&ptr);
	printf("*ptr=%d\n",*ptr);
	printf("*(&a)=%d\n",*(&a));
	printf("*(&ptr)=%d\n",*(&ptr));
	
}
