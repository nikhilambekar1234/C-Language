#include<stdio.h>
void main()
{
	int a=10;//4 size
	char ch='k';//1 size
	float f=3.14;// 4size
	void *ptr;// 8 size
	ptr=&a;
	printf("a=%d\n",(*(int*)ptr));
	ptr=&ch;
	printf("ch=%c\n",(*(char*)ptr));
	ptr=&f;
	printf("f=%f\n",(*(float*)ptr));`
	
	// total size 17
}
