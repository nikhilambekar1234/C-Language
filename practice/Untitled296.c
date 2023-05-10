#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,cal1,cal2,cal3,cal4;
	printf("enter num");
	scanf("%f%f%f",&a,&b,&c);
	
	cal1=sqrt(b*b-4*a*c);
	cal2=2*b;
	cal3=cal1/cal2;
	cal4=-cal1/cal2;
	printf("%f\n",cal1);
	printf("%f\n",cal2);
	printf("%f\n",cal3);
	printf("%f\n",cal4);
	
	
	
	
	
}
