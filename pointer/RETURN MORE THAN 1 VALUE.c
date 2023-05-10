#include<stdio.h>
void addsub(int x,int y,int *pa,int *ps)
{
	*pa=x+y;
	*ps=x-y;
}
void main()
{
	int add,sub;
	addsub(20,10,&add,&sub);
	printf("ADD=%d\n",add);
	printf("SUB=%d\n",sub);
}
