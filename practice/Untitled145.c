#include<stdio.h>
int main()
{
	int num[5],i,rev=0,temp,rem;
	printf("Enter num:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
		temp=0;
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d\n",num[i]);
		
	    temp=num[i];
	    rev=0;
       	while(num[i]!=0)
	    {
	     	rem=num[i]%10;
	    	rev=rev*10+rem; 
	    	num[i]=num[i]/10;				
	    }
    	printf("rev=%d\n",rev);
    	if(temp==rev)
    	{
		   printf("number is palindrome\n\n");
    	}
	    else
     	{
    		printf("not palindrome\n\n");
    	}
	}		   
}
		   	
