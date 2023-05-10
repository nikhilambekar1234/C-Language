#include<stdio.h>
float percent(float a,float b,float c,float d,float e)
{
	float percent;
	percent=(float)((a+b+c+d+e)/500)*100;
	return percent;
}
void main()
{
	float a,b,d,c,e;
	printf("enter marks of five subject which is each subject having 100 marks");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	printf("percentage=%f",percent(a,b,c,d,e));
}
