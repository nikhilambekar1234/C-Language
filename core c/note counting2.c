#include<stdio.h>
void main()
{
	int amount,mode,div,remain,remain1,remain2,remain3,remain4,remain5,remain6,remain7,remain8;
	printf("Enter a amount  :  ");
	scanf("%d",&amount);
	remain=amount%2000;
	div=amount/2000;
	printf("Rs2000=%d note \n",div);
	remain1=remain%500;
	div=remain/500;
	printf("Rs500=%d note \n",div);
	remain2=remain1%200;
	div=remain1/200;
	printf("Rs200=%d note \n",div);
	remain3=remain2%100;
	div=remain2/100;
	printf("Rs100=%d note \n",div);
	remain4=remain3%50;
	div=remain3/50;
	printf("Rs50=%d note \n",div);
	remain5=remain4%20;
	div=remain4/20;
	printf("Rs20=%d note \n",div);
	remain6=remain5%10;
	div=remain5/10;
	printf("Rs10=%d note \n",div);
	remain7=remain6%5;
	div=remain6/5;
	printf("Rs5=%d note \n",div);
	remain8=remain7%2;
	div=remain7/2;
	printf("Rs2=%d note \n",div);
	div=remain8/1;
	printf("Rs1=%d note \n",div);	
	
}
