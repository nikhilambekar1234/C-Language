#include<stdio.h>
int main()
{
	int num[10],i,rev=0,temp,rem,sum=0;
	printf("Enter num:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
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
    		sum=sum+rev;
    		printf("palindome sum=%d\n",sum);
		   printf("number is palindrome\n\n");
    	}
	    else
     	{
    		printf("not palindrome\n\n");
    	}
    	
	}
      	temp=sum;
	    rev=0;
       	while(sum!=0)
	    {
	     	rem=sum%10;
	    	rev=rev*10+rem; 
	    	sum=sum/10;				
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
		   	
