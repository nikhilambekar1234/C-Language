#include<stdio.h>
void main()
{
	float a,b,c,d,e,f,percent;
	printf("Enter marks of six subject which is each sub having 100 marks:");
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	percent=((a+b+c+d+e+f)/600)*100;
	printf("percentage:%f\n",percent);
	if(percent>=60)
	{
	    printf("Student is eligible for MNC Company");	
	}
	else
	{
		printf("Student is NOT eligible for MNC Company");
	}
}
