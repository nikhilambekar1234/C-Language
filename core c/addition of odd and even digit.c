#include<stdio.h>
void main()
{
	int n,rem,odd=0,even=0;
	printf("enter no:");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem=n%10;
		if(rem%2==0)
		{
			even+=rem;
		}
		else
		{
			odd+=rem;
		}
		n=n/10;
	}
	printf("%d\n",even);
	printf("%d",odd);
}
