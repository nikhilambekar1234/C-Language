#include<stdio.h>
void main()
{
	int amount,div,remain;
	printf("Enter an amount:");
	scanf("%d",&amount);
	
	div=amount/2000;
	remain=amount%2000;
	printf("Rs2000*%d note\n",div);
	
	div=remain/500;
	remain%=500;
	printf("Rs 500*%d note\n",div);
	
	div=remain/200;
	remain%=200;
	printf("Rs 200*%d note\n",div);
	
	div=remain/100;
	remain%=100;
	printf("Rs 100*%d note\n",div);
	
	div=remain/50;
	remain%=50;
	printf("Rs  50*%d note\n",div);
	
	div=remain/20;
	remain%=20;
	printf("Rs  20*%d note\n", div);
	
	div=remain/10;
	remain%=10;
	printf("Rs  10*%d note\n", div);
	
	div=remain/5;
	remain%=5;
	printf("Rs   5*%d note\n", div);
	
	div=remain/2;
	remain%=2;
	printf("Rs   2*%d note\n",  div);
	
	div=remain%1;
	printf("Rs   1*%d note", div );
}
