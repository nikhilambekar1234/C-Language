#include<stdio.h>
int fun(int *a, int *b)
{
	int temp=0,gun;
	temp=*a;
	*a=*b;
	*b=temp;
	
	return gun(a,b);
}
void main()
{
	int a=10,b=20,temp=0,gun;
	
	printf("a=%d\n",a);
	printf("b=%d\n",b);

	
	gun=fun(&a,&b);
	printf("a=%d,b=%d",gun);
}
