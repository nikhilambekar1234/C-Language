#include<stdio.h>
void main()
{
	int a,square,cube;
	printf("Enter a number:");
	scanf("%d",&a);
	
	square=a*a;
	cube=square*a;
	
	printf("square=%d\n",square);
	printf("cube=%d",cube);
}
