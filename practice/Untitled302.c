#include<stdio.h>
int fun(int *ptr1,int *ptr2)
{
	int max;
	int *ptr3=&max;
    *ptr3=*ptr1+(*ptr2);
    return *ptr3;
}
void main()
{
	int a,b,max;
	int *ptr1=&a,*ptr2=&b,*ptr3=&max;
	printf("enter num:\n");
	scanf("%d%d",ptr1,ptr2);
	*ptr3=fun(ptr1,ptr2);
	printf("max=%d",*ptr3);
}
