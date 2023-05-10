#include<stdio.h>
int main()
{
	int num[10],i,rev=0,rem,n;
	printf("Enter num:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
		n=num[i];
	    rev=0;
       	while(n>0)
	    {
	     	rem=n%10;
	    	rev=rev*10+rem; 
	    	n=n/10;				
	    }
	    rev=rev%10;
    	if(rev==2)
    	{
    		
		   printf("%d\t",num[i]);
    	}
	}		   
}
		   	
