#include<stdio.h>
int main()
{
	int num[10],i,n,sum=0;
	printf("Enter num:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
		sum=0;
		
		for(n=1;n<num[i];n++)
     	{
           	if(num[i]%n==0)
            {
      	    	sum=sum+n;
		    }
     	}
    	if(sum==num[i])
    	{
	    	printf("Perfect number = %d\n",num[i]);
     	} 
    	else
    	{
	    	printf("Not perfect number = %d\n",num[i]);
    	}
	}		   
}
		   	
