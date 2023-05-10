#include<stdio.h>
void strong()
{
	int i,j,n,rem,temp,sum=0;
	printf("enter no:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
	    rem=n%10;
		i=1;
		for(j=1;j<=rem;j++)
		{
			i*=j;
		}
		sum+=i;
		n=n/10;				
	}
	if(sum==temp)
	{
		printf("Strong number=%d",temp);
	}
	else
	{
		printf("Not strong number=%d",temp);
	}	
}
void main()
{
	strong();
}
