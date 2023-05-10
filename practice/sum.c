#include<stdio.h>
void main( int argc,char *argv[])
{
	int a,b,sum,sub;
	printf("enter two num:");
	scanf("%d%d",&a,&b);
	printf("file name=%s\n",argv[0]);
	if(argc<2)
	{
		printf("no agument passed");
	}
	else
	{
		printf("1st argument is %s\n",argv[3]);
	}
}

