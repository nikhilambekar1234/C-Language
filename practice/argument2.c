#include<stdio.h>
#include<stdlib.h>
void main( int argc,char *argv[])
{
	int a,b,sum,sub;
	
	printf("file name=%s\n",argv[0]);
	if(argc>2)
	{
		char *s1=argv[1];
		char *s2=argv[2];
		int x=atoi(s1);
		int y=atoi(s2);
		printf("%d\n%d\n",x,y);
		printf("sum=%d\n",x+y);
		printf("sub=%d\n",x-y);
		
	}
	else
	{
		
		printf("insufficient input values");
	}
}

