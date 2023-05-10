#include<stdio.h>
int main()
{
	int num[10],i,p=0,temp,rem,k;
	printf("Enter num:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
		p=0;
	   	printf("%d\n",num[i]);
	    temp=num[i];
        while(num[i]!=0)
     	{
		    rem=num[i]%10;
	     	k=rem*rem*rem;
	    	p+=k;
	    	num[i]=num[i]/10;				
     	}
     	printf("p=%d\n",p);
    	if(p==temp)
    	{
		printf("amst\n\n");
    	}
    	else
	    {
	    	printf("not amst\n\n");
    	}
	}		   
}
		   	
