#include<stdio.h>
#include<string.h>
struct complex
{
	int real;
	int imaginary;

};
struct complex fun(struct complex n1,struct complex n2)
{
    struct complex sum,mult,sub;
    
    sum.real=n1.real+n2.real;
	sum.imaginary=n1.imaginary+n2.imaginary;
	
	mult.real=n1.real*n2.real;
	mult.imaginary=n1.imaginary*n2.imaginary;
	
	sub.real=n1.real-n2.real;
	sub.imaginary=n1.imaginary-n2.imaginary;
	
	printf("sum=> real=%d   imaginary=%d\n",sum.real,sum.imaginary);
	printf("mult=> real=%d  imaginary=%d\n",mult.real,mult.imaginary);
	printf("sub=> real=%d   imaginary=%d\n",sub.real,sub.imaginary);
}
void main()
{
	struct complex n1,n2;
	printf("enter first complex num:");
	scanf("%d%d",&n1.real,&n1.imaginary);
	printf("enter second complex num:");
	scanf("%d%d",&n2.real,&n2.imaginary);
	
	fun(n1,n2);
}
