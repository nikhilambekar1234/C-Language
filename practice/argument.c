#include<stdio.h>
void main( int argc,char *argv[])
{
	printf("file name=%s\n",argv[0]);
	if(argc<2)
	{
		printf("no agument passed");
	}
	else
	{
		printf("1st argument is %s\n",argv[1]);
	}
}

