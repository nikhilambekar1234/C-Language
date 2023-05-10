#include<stdio.h>
void main()
{
	int a=10,b=20,sum;
	int *ptr1=&a;
	int *ptr2=&b;
	sum=*ptr1+*ptr2;
	printf("sum=%d\n",sum);
	
	

}
