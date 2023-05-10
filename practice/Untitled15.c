#include<stdio.h>
void main()
{
	int a,b,add,sub,diff;
	printf("Enter two no:");
	scanf("%d%d",&a,&b);
	
	add=a+b;
	sub=a-b;
	diff=add-sub;
	
	printf("add=%d\n",add);
	printf("sub=%d\n",sub);
	printf("diff=%d",diff);
}
