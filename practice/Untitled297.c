#include<stdio.h>
void main()
{
	int a,b;
	int *ptr1=&a,*ptr2=&b;
	printf("enter two num");
	scanf("%d%d",ptr1,ptr2);
	
	if(*ptr1>*ptr2)
	{
		printf("max=%d\n",*ptr1);
	}
	else
	{
		printf("max=%d",*ptr2);
	}
	
	
}
