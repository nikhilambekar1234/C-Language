#include<stdio.h>
#include<dos.h>
void main( int argc,char *argv[])
{
	int a,b,sum,sub;
	
	
	if(argc>2)
	{
		char *s1=argv[1];
		char *s2=argv[2];
		int x=atoi(s1);
		int y=atoi(s2);
		printf("sum=%d",x+y);
		printf("sub=%d",x-y);
		
	}
	else
	{
		
		printf("insufficient input values");
	}
}

