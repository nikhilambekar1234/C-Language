#include<stdio.h>
int main()
{
	int amount,div,remain,mult,Total=0;
	
	printf("Enter an amount:");
	scanf("%d",&amount);
	printf("----------------------------------------------------------\n");
	
		{
			
    		
    		
        	
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
		
		
		kdn :
		div=amount/2000;
		
    	printf("Rs2000*%d \n",div);
    	remain=amount%2000;
    	div=remain/500;
    	printf("Rs 500*%d \n",div);
		
	return 0;
}
