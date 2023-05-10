#include<stdio.h>
int fun(int *a,int *b,int *c)
{
	printf("%d\t%d\t%d\n",*a,*b,*c);
    int temp=0;
	temp=*c;
	*c=*b;
	*b=*a;
	*a=temp;
  	printf("%d\t%d\t%d\n",*a,*b,*c);		
}
void main()
{
	int a=5,b=6,c=7;
	printf("%d\t%d\t%d\n",a,b,c);
	fun(&a,&b,&c);
	printf("%d\t%d\t%d\n",a,b,c);
}