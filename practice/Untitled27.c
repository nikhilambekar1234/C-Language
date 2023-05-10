#include<stdio.h>
void main()
{
	int n,rem,sum=0,p;
	printf("enter no:");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem=n%10;
		p=rem;
		
		if(p=rem)
		{
			sum+=rem;
		}
		
        n=n/10;				
	}
	  printf("Addition of all disting digits is even = %d\n",sum);	
	
	
	
}
