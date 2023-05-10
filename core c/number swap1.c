#include<stdio.h>
void main()
{
	int a=10, b=20;
	a=a+b;
	b=a-b;
	a=a-b;
	a+=5;
	b-=5;
	printf("a=%d\n",a);
	printf("b=%d",b);
	
}
