#include<stdio.h>
int main()
{
	int num[10],i,rev=0,temp,rem,sum=0;
	printf("Enter ten num:\n");
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
    	if(temp==rev)
    	{
    		sum=sum+rev;
    		printf("number is palindrome=%d\n\n",temp);
    		printf("palindome sum=%d\n",sum);
		}
    }
	printf("Check Addition\n");
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
    	    printf("Addition is palindrome\n\n");
    	}
	    else
     	{
    		printf("Addition is not palindrome\n\n");
    	}		   
}
		   	
