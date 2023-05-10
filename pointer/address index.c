#include<stdio.h>
void main()
{
	int a=10;
	int *ptr=&a;
	
	a++;
	printf("after ++a=%d\n",a);  
	printf("&a=%d\n",&a);
	
	ptr++;
	printf("after ptr++=%d\n",ptr);
}
