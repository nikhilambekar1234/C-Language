#include<stdio.h>
void main()
{
	int a=10; //4 size
	char ch='k'; //1 size
	float b=3.14;//4 size
	int *ptr=&a;  // 8size
	char *ptr1=&ch; //8 size
	float *ptr2=&b; //8 size
	 
	printf("ptr=%d\n",*ptr);
	printf("ptr1=%c\n",*ptr1);
	printf("ptr2=%f\n",*ptr2);
	
	// total size 33
}
