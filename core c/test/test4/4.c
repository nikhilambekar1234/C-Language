#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("Enter NO:");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("Even no=%d\n",n);
		while(n%2==0)
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
		    	printf("prime\n");
	      	}
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
		     	printf("Odd with not prime=%d\n",n);
		     	
		     	return 0;;
	    	}
     	}
	}
}
