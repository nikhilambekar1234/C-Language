#include<stdio.h>
int main()
{
	int num[2],i,n,sum=0;
	printf("Enter num:\n");
	for(i=0;i<num[i];i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<num[i];i++)
	{
		
		printf("%d\n",num[i]);
		for(n=1;n<num[i];n++)
     	{
           	if(num[i]%n==0)
            {
      	    	sum+=n;
		    }
     	}
    	if(sum==num[i])
    	{
	    	printf("Perfect number = %d",num[i]);
     	} 
    	else
    	{
	    	printf("Not perfect number = %d",num[i]);
    	}
	}		   
}
		   	
