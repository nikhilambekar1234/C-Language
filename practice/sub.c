#include<stdio.h>
void main( int argc,int *sub[])
{
	int a,b,sum;
	printf("enter two num:");
	scanf("%d%d",&a,&b);
	printf("file name=%d\n",sub[0]);
	if(argc<2)
	{
		printf("no agument passed");
	}
	else
	{
		sub=a-b;
		printf("sub= %s\n",sub);
	}
}

