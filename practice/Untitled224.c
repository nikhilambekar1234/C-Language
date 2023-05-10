#include<stdio.h>
void main()
{
	int amount,div,remain;
	
	printf("enter amount:");
	scanf("%d",&amount);
	
	kdn :
	
	div=amount/2000;

	printf("2000*%d\n",div);
	
	div=remain/500;
	
	printf("500*%d\n",div);
	
	div=remain/200;
	
	printf("200*%d\n",div);
	
	div=remain/100;
	
	printf("100*%d\n",div);
	
	div=remain/50;
	
	printf("50*%d\n",div);
	
	div=remain/20;
	
	printf("20*%d\n",div);
	
	div=remain/10;
	
	printf("10*%d\n",div);
	
	div=remain/5;
	
	printf("5*%d\n",div);
	
	div=remain/2;
	
	printf("2*%d\n",div);
	
	printf("1*%d\n",1*remain);
	{
			remain=amount%2000;
			remain%=500;
			remain%=200;
			remain%=100;
			remain%=50;
			remain%=20;
			remain%=10;
			remain%=5;
			remain%=2;
			
			
			
			
		goto kdn;
	}
	
}
