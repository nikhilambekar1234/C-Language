#include<stdio.h>
void main()
{
	float a,b,c,d,e,avg;
	printf("Enter five integer number:");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	
	avg=(a+b+c+d+e)/5;
	printf("Avg=%f",avg);
}
