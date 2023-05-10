#include<stdio.h>
void strong(int n)
{
	int i,j,rem,temp,sum=0;
	
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
	int n;
	printf("enter no:");
	scanf("%d",&n);
	strong(n);
}
