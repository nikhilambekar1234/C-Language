#include<stdio.h>
#include<string.h>
struct complex
{
	float real;
	float imaginary;

};
int fun(struct complex n1,struct complex n2)
{
    struct complex sum,mult,sub;
    
    printf("addition\n");
    sum.real=n1.real+n2.real;
	sum.imaginary=n1.imaginary+n2.imaginary;
	if(sum.imaginary>0)
	{
		printf("%f+%fi\n",sum.real,sum.imaginary);
	}
	else
	{
		printf("%f%fi\n",sum.real,sum.imaginary);
	}
	printf("substraction\n");
	sub.real=n1.real-n2.real;
	sub.imaginary=n1.imaginary-n2.imaginary;
	if(sub.imaginary>0)
	{
		printf("%f+%fi\n",sub.real,sub.imaginary);
	}
	else
	{
		printf("%f %fi\n",sub.real,sub.imaginary);
	}
	printf("multiplication\n");
	mult.real=n1.real*n2.real-n1.imaginary*n2.imaginary;
	mult.imaginary=n1.imaginary*n2.real+n1.real*n2.imaginary;
	if(mult.imaginary>0)
	{
		printf("%f+%fi\n",mult.real,mult.imaginary);
	}
	else
	{
		printf("%f %fi\n",mult.real,mult.imaginary);
	}
}
void main()
{
	struct complex n1,n2;
	printf("enter first complex num:");
	scanf("%f%f",&n1.real,&n1.imaginary);
	printf("enter second complex num:");
	scanf("%f%f",&n2.real,&n2.imaginary);
	
	fun(n1,n2);
}
