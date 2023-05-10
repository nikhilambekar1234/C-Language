#include<stdio.h>
void main()
{
	int n,rem,sum=0;
	printf("enter no:");
	scanf("%d",&n);
	
	while(n!=0)
	{ 
		rem=n%10;
		sum+=rem;
        n=n/10;				
	}
	if(sum%2==0)
	{
	   printf("Addition of all disting digits is even = %d\n",sum);	
	}
	else
	{
	   printf("Addition of all disting digits is odd = %d\n",sum);	
	}
	
}
