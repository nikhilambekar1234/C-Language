#include<stdio.h>
void main()
{
	int i=1,j,n,sum=0,temp,rem;
	printf("Enter no:");
	scanf("%d",&n);
	temp=n;
	
	while(n!=0)
	{
		rem=n%10;
		for(j=1,i=1;j<=rem;j++)
		{
			i=i*j;
			
		}
		sum+=i;
		n=n/10;
		
	}
	printf("sum=%d",sum);
	if(sum==temp)
	{
		printf("strong");
	}
	else
	{
		printf("not");
	}
	
}
