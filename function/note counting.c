#include<stdio.h>
void note()
{
	int amount,div,remain,mult,Total=0;
	
	printf("Enter an amount:");
	scanf("%d",&amount);
	
	printf("----------------------------------------------------------\n");
	
	div=amount/2000;
	remain=amount%2000;
	mult=2000*div;
	Total+=mult;
	printf("Rs2000*%d=%d \n",div,mult);
	
	div=remain/500;
	remain%=500;
	mult=500*div;
	Total+=mult;
	printf("Rs 500*%d =%d \n",div,mult);
	
	div=remain/200;
	remain%=200;
	mult=200*div;
	Total+=mult;
	printf("Rs 200*%d =%d \n",div,mult);
	
	div=remain/100;
	remain%=100;
	mult=100*div;
	Total+=mult;
	printf("Rs 100*%d =%d \n",div,mult);
	
	div=remain/50;
	remain%=50;
	mult=50*div;
	Total+=mult;
	printf("Rs  50*%d =%d \n",div,mult);
	
	div=remain/20;
	remain%=20;
	mult=20*div;
	Total+=mult;
	printf("Rs  20*%d =%d \n", div,mult);
	
	div=remain/10;
	remain%=10;
	mult=10*div;
	Total+=mult;
	printf("Rs  10*%d =%d \n", div,mult);
	
	div=remain/5;
	remain%=5;
	mult=5*div;
	Total+=mult;
	printf("Rs   5*%d =%d \n", div,mult);
	
	div=remain/2;
	remain%=2;
	mult=2*div;
	Total+=mult;
	printf("Rs   2*%d =%d \n",  div,mult);
	
	
	mult=1*remain;
	Total+=mult;
	printf("Rs   1*%d =%d\n", remain,mult );
	
	printf("----------------------------------------------------------\n");
	
	
	printf("Rs        =%d = TOTAL AMOUNT",Total);
}
void main()
{
	note();
}
