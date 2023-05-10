#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter two no:");
	scanf("%d%d",&a,&b);
	
	a=a+b;
	b*=2;
	a+=b;
	b=b-a;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	
}
