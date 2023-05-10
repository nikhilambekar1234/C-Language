#include<stdio.h>
int fun(int *a, int *b)
{
	int temp=0;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("a=%d\n",*a);
	printf("b=%d\n",*b);
	
}
void main()
{
	int a=10,b=20,temp=0;
	
	printf("a=%d\n",a);
	printf("b=%d\n",b);

	
	fun(&a,&b);
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}
