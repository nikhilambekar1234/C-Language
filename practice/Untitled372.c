#include<stdio.h>
#include<stdlib.h>

void main( int argc,char *argv[])
{
	int i,a,b,c,temp=0;
	a=atol(argv[1]);
	b=atol(argv[2]);
	c=atol(argv[3]);
	for(i=0;i<10;i++)
	{
		if(a>b)
		{
			temp=a;
			a=b;
			b=temp;
		}
		else if(b>c)
		{
			temp=b;
			b=c;
			c=temp;
		}
	}
	printf("%c\t%c\t%c",a,b,c);
	

}

