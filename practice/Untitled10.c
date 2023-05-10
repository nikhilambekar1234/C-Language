#include<stdio.h>
void main()
{
	int amount,div,remain,remain1,remain2,remain3,remain4,remain5,remain6,remain7,remain8;
	printf("Enter an amount:");
	scanf("%d",&amount);
	
	div=amount/2000;
	remain=amount%2000;
	printf("Rs2000: %d note\n",div);
	
	div=remain/500;
	remain1=remain%500;
	printf("Rs500:  %d  note\n",div);
	
	div=remain1/200;
	remain2=remain1%200;
	printf("Rs200: %d  note\n",div);
	
	div=remain2/100;
	remain3=remain2%100;
	printf("Rs100:  %d  note\n",div);
	
	div=remain3/50;
	remain4=remain3%50;
	printf("Rs50:  %d  note\n",div);
	
	div=remain4/20;
	remain5=remain4%20;
	printf("Rs20:  %d note\n", div);
	
	div=remain5/10;
	remain6=remain5%10;
	printf("Rs10:  %d  note\n", div);
	
	div=remain6/5;
	remain7=remain6%5;
	printf("Rs5:  %d  note\n", div);
	
	div=remain7/2;
	remain8=remain%2;
	printf("Rs2:  %d  note\n",  div);
	
	div=remain8%1;
	printf("Rs1:  %d  note", div );
}
