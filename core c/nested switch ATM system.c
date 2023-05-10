  #include<stdio.h>
int main()
{
	int pin,op,check;
	float amount, Balance=7000;
	int PIN=4927;
	
    kdn :
	printf("Enter pin:");
	scanf("%d",&pin);
	if(PIN!=pin)
	{
		printf("INVALID PIN\n");
		printf("Try Again\n");
		printf(" Thank You...");
		
		
		return 0;
		
	}
	printf("     WELCOME\nWhat can i help you!\nEnter:-\n");
	printf("1-Check Balance\n2-Credit\n3-Withdraw\n4-Change pin\n:-");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			printf("Balance in your account is : %f\n",Balance);
			break;
		case 2:
			printf("Credit your amount :\n= ");
			scanf("%f",&amount);
			Balance+=amount;
			printf("Amount is credited successfully\n");
			
	        break;
    	case 3:
			printf("Enter amount to withdraw :\n= ");
			scanf("%f",&amount);
			if(amount>Balance)
			{
			  printf("Insufficient balance in your account\n ");	
			}
			else
			{
				Balance-=amount;
			printf("Amount is withdraw successfully\n");
			}
			break;
		case 4:
			
			printf("Enter pin to change :\n= ");
			scanf("%d",&pin);
			PIN=pin;
			printf("new pin generated : %d\n",PIN);
			printf("Your new pin is generated successfully\n");
			goto kdn;
	        break;
	    default :
		    printf("Invalid Transation");    
	}
	printf("Do you want to check your balance and receive receipt?\nPress:\n1-Yes\n2-No\n:-");
	scanf("%d",&check);
	if(check==1)
	{
		printf("Your balance is = %f\n",Balance);
		printf("       Thank You");
		
	}
	else
	{   printf("       Thank You\n");

	}
	
}
