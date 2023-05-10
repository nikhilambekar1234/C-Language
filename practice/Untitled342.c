#include<stdio.h>
#include<stdlib.h>
void main( int argc,char *argv[])
{
	int i,sum=0,n,a;
	printf("enter num");
	scanf("%d\n",n);
	for(i=1;i<3;i++)
	{
		a=atol(argv[i]);
		sum=sum+a;
		
		
	}
	printf("sum=%d\n",sum);

}

