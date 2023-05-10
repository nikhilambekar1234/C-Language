#include<stdio.h>
#include<stdlib.h>
void main( int argc,char *argv[])
{
	int i,sum=0,a;
	a=atol(argv[1]);
	for(i=1;i<=a;i++)
	{
		printf("%d\n",i);
		sum=sum+i;
		
		
	}
	printf("sum=%d\n",sum);

}

