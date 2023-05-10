//Write a C program to count total number of notes in given amount

#include<stdio.h>
int main()
{
	int d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,remain,sum=0;
	
	printf("enter amount:");
	scanf("%d",&remain);
	
	if(remain>=2000)
	{
		d1=remain/2000;
	remain%=2000;
	m1=2000*d1;
	sum+=m1;
	printf("2000*%d=%d\n",d1,m1);
	}
	
	if(remain>=1000)
	{
		d2=remain/1000;
	remain%=1000;
	m2=1000*d2;
	sum+=m2;
		printf("1000*%d=%d\n",d2,m2);
	}
	if(remain>=500)
	{
		d3=remain/500;
	remain%=500;
	m3=500*d3;
	sum+=m3;
	printf("500*%d=%d\n",d3,m3);
	}
	if(remain>=200)
	{
		d4=remain/200;
	remain%=200;
	m4=200*d4;
	sum+=m4;
	printf("200*%d=%d\n",d4,m4);
	}
	if(remain>=100)
	{
		d5=remain/100;
	remain%=100;
	m5=100*d5;
	sum+=m5;
	printf("100*%d=%d\n",d5,m5);
	}
	if(remain>=50)
	{
		d6=remain/50;
	remain%=50;
	m6=50*d6;
	sum+=m6;
	printf("50*%d=%d\n",d6,m6);
	}
	if(remain>=20)
	{
		d7=remain/20;
	remain%=20;
	m7=20*d7;
	sum+=m7;
	printf("20*%d=%d\n",d7,m7);
	}
	if(remain>=10)
	{
		d8=remain/10;
	remain%=10;
	m8=10*d8;
	sum+=m8;
	printf("10*%d=%d\n",d8,m8);
	}
	if(remain>=5)
	{
		d9=remain/5;
	remain%=5;
	m9=5*d9;
	sum+=m9;
	printf("5*%d=%d\n",d9,m9);
	}
	if(remain>=2)
	{
		d10=remain/2;
	remain%=2;
	m10=2*d10;
	sum+=m10;
	printf("2*%d=%d\n",d10,m10);
	}
	if(remain>=1)
	{
		d11=remain/1;
	remain%=1;
	m11=1*d11;
	sum+=m11;
	printf("1*%d=%d\n",d11,m11);
	}
	printf("       %d = TOTAL\n",sum);
	
}
