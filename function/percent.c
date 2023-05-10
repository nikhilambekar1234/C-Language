#include<stdio.h>
void percent()
{
	float a,b,d,c,e,f;
	float percent;
	printf("enter marks of five subject which is each subject having 100 marks");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	percent=(float)((a+b+c+d+e)/500)*100;
	printf("%f\n",percent);
	
}
void main()
{
	percent();
}
