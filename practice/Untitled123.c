#include<stdio.h>
void addition()
{
	int m,i,n=0,count=0,temp,rem,rev=0;
	printf("Enter no:");
	scanf("%d",&m);
	
	for(i=1;i<=m;i++)
	{
		if(i%2!=0)
		{
			n+=i;
		}
	}
	printf("sum=%d\n",n);
    if(n%2==0)
	{
	    printf("Even no=%d\n",n);
       	temp=n;
       	while(n!=0)
       	{
         	rem=n%10;
	     	rev=rev*10+rem;
	     	n=n/10;				
     	}
      	printf("rev=%d\n",rev);
    	if(temp==rev)
    	{
	    	printf("number is palindrome");
    	}
    	else
	    {
	    	printf("not palindrome");
    	}
	}
	else 
	{
    	while(n%2!=0)
     	{
	    	for(i=1;i<=n;i++)
	      	{
			    if(n%i==0)
			    {
			    	count++;
				}	     
	     	}
		   if(count==2)
	       	{
		    	printf("Odd with prime=%d\n",n);
	      	}
	    	else
		    {
		     	printf("Odd but not prime=%d\n",n);
		     	
		     	break;
	    	}
     	}
	}
}
void main()
{
	addition();
}
