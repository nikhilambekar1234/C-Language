#include<stdio.h>
void main()
{
	int h,b;
	float area;
	printf("Enter base and height of triangle:");
	scanf("%d%d",&h,&b);
	
	area=(float)(1.0/2.0)*h*b;
	
	printf("area=%f",area);
	 
}
