#include<stdio.h>
void main()
{
	int a,b,sum;
	int *ptr1=&a,*ptr2=&b;
	int**ptr3=&ptr2 ;
	printf("enter num");
	scanf("%d%d",&a,&b);
	
	sum=*ptr1+*ptr2;
	sum=*ptr1+**ptr3;
	
	printf("sum=%d\n",sum);
	printf("sum=%d\n",sum);
}
