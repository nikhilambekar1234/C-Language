#include<stdio.h>
int main()
{
	int num[10],i,n=0,count=0,j=1;
	printf("Enter num:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("prime num\n");
	for(i=0;i<10;i++)
	{
	    count=0;
		j=1;
     	while(j<=num[i])
    	{
	    	if(num[i]%j==0)
	     	{
		    	count++;
	    	}
	    	j++;
	   }
       if(count==2)
     	{
	    	printf("%d\n",num[i]);
	    }	
	}		   
}
		   	
