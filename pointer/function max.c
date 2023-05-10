#include<stdio.h>
int fun(int *ptr1,int *ptr2)
{
    if(*ptr1>*ptr2)
    {
    	return *ptr1;
	}
	else
	{
		return *ptr2;
	}
}
void main()
{
	int a,b,res;

	printf("enter num:\n");
	scanf("%d%d",&a,&b);
	res=fun(&a,&b);
	printf("max=%d",res);
}
