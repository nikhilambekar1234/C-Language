#include<stdio.h>
void main()
{
	int i=1,j=1,n;
	int *ptr1=&i,*ptr2=&j,*ptr3=&n;
	printf("enter no");
	scanf("%d",ptr3);
	
	for(*ptr1=1;*ptr1<=*ptr3;(*ptr1)++)
	{
		*ptr2=*ptr2*(*ptr1);
	}
	printf("%d",*ptr2);
}
