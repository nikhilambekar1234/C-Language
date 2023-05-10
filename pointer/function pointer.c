#include<stdio.h>
int add()
{
	int a,b;
	printf("enter num ");
	scanf("%d%d",&a,&b);
	
	return a+b;	
}
void main()
{
	int result;
	int (*ptr)();
	ptr=&add;
	result=(*ptr)();
	printf("result=%d\n",result);
}
