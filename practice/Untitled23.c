#include<stdio.h>
void main()
{
	int i=1,count,n,m;
	printf("Enter no:");
	scanf("%d",&m);
	for(n=1;n<=m;n++)
	{
		count=0;
		i=1;
     	while(i<=n)
    	{
	    	if(n%i==0)
	     	{
		    	count++;
	    	}
	    	i++;
	   }
       if(count==2)
     	{
	    	printf("%d\n",n);
	    }
	}
}
