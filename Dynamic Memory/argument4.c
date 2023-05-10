#include<stdio.h>
void main(int argc,char *argv[])
{
	int a,b;
	float div;
	a=atol(argv[1]);
	b=atol(argv[2]);
	
	printf("sum=%d\n",a+b);
	printf("sub=%d\n",a-b);
	printf("mult=%d\n",a*b);
	div=(float)a/b;
	printf("div=%f\n",div);

}
