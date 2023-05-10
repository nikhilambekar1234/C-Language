#include<stdio.h>
int main()
{
	int pin,op,check;
	float amount, balance=7000;
	int PIN=4927;
	
	kdn :
	
	printf("Enter pin:");
	scanf("%d",&pin);
	if(PIN!=pin)
	{
		printf("Invalid pin\nTry Again\n  Thank You.....\n");
		
		return 0;
		
	}
	printf("   Welcome\n What can i help you!\n enter:-\n");
	printf("1-check balance\n2-credit\n3-withdrawal\n4-change pin\n:-");
	scanf("%d",&op);
	switch(op)
	{
		
		case 1:
			printf("balance in your account is = %f\n",balance);
			break;
			
		case 2:
		    printf("credit your amount : \n =");
			scanf("%f",&amount);
			balance+=amount;
			printf("amount is credited successfully\n");
			break;
			
		case 3:
		     printf("enter amount to withdraw:\n=");
			 scanf("%f",&amount);
			 if( amount>balance)
			 {
			 	printf("Insufficient balance in your account\n");
			 }
			 else
			 {
			 	balance-=amount;
			 	printf("amount is withdrawa successfully\n");
			 }
			 break;
			 
		case 4:
		     printf("enter pin to change :\n=");
			 scanf("%d",&pin);
			 PIN=pin;
			 printf("new pin generated :%d\n",PIN);
			 printf("your new pin is generated successfully\n");
			 printf("press:-\n1-if you want to transaction\n2-proceed\n:-");
			 scanf("%d",&check);
			 if(check==1)
			 {
			 	goto kdn;
			 }
			 break;
			 
		default :
		     printf("Invalid Transation");
			 	 	 		
	}
   	printf("Do you want to check your balance and receive receipt?\n press:-\n1-yes\n2-No\n ");
   	scanf("%d",&check);
   	if(check==1)
   	{
   		printf("your balance is = %f\n",balance);
   		printf("    Thank You");
   }
   else
   {
   	printf("  Thank You\n");
   	
   }
}
