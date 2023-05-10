#include<stdio.h>
void main()
{
	int a,b;
	printf("enter two no:");
	scanf("%d%d",&a,&b);
	
	a=a+b;
	b=b-a;
	a*=10;
	b+=10;
	
	printf("The value of a: %d\n",a);
	printf("The value of b: %d",b);
	
}
