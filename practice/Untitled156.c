#include<stdio.h>
int main()
{
	int num[2],i,rem,count=0,temp=0;
	printf("Enter num:\n");
	for(i=0;i<2;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<2;i++)
	{
		
       	while(num[i]!=0)
	    {
	     	rem=num[i]%10;
	     	count=count+1;
			
			
	    	num[i]=num[i]/10;				
	    }
	    
	    printf("%d\n",count);
		
    
	}		   
}
		   	
