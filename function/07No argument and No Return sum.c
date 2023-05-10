#include<stdio.h>
void addition();
void addition()
{
	int a,b;
	printf("enter two num");
	scanf("%d%d",&a,&b);
	printf("sum=%d\n",a+b);
}
void main()
{
	printf("welcome\n");
	addition();
	printf("bye\n");
}

