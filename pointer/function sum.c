#include<stdio.h>
int fun(int *ptr1,int *ptr2)
{
	int sum;
	int *ptr3=&sum;
    *ptr3=*ptr1+(*ptr2);
    return *ptr3;
}
void main()
{
	int a,b,sum;
	int *ptr1=&a,*ptr2=&b,*ptr3=&sum;
	printf("enter num:\n");
	scanf("%d%d",ptr1,ptr2);
	*ptr3=fun(ptr1,ptr2);
	printf("sum=%d",*ptr3);
}
