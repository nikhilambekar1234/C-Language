#include<stdio.h>
void percent(float a,float b,float c,float d,float e)
{
	float percent;
	percent=(float)((a+b+c+d+e)/500)*100;
	printf("%f\n",percent);
}
void main()
{
	float a,b,d,c,e,f;
	printf("enter marks of five subject which is each subject having 100 marks");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	percent(a,b,c,d,e);
}
