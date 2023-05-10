#include<stdio.h>
int main()
{
	int num[10],i,rem,count=0,temp=0,n;
	printf("Enter num:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
		n=num[i];
		temp=0;
		count=0;
	   while(n!=0)
	    {
	   		rem=n%10;
	     	if(rem%2==0)
	     	{
	     		temp++;
		    }
		    count++;
			n=n/10;				
	    }
	    printf("%d\n",num[i]);
	    printf("temp=%d\n",temp);
	    printf("count=%d\n",count);
	    if(temp==count)
	    {
	    	printf("even=%d\n\n",num[i]); 
		}
		else
		{
			printf("odd=%d\n\n",num[i]);
		}	    	
	
	}
}
		   	
