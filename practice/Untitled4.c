#include<stdio.h>
void main()
{
	float a,b,c,d,e,f;
	float percent;
	printf("Enter marks of six subject which is each subject having 100 marks ");
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	
	percent=((a+b+c+d+e+f)/600)*100;
	printf("percent=%f\n",percent);
	
	if(percent>=60)
	{
		printf("Student is eligible for MNC company");
	}
	else
	{
		printf("Student is Not eligible for MNC company");
	}
}
