#include<stdio.h>
void main()
{
	int n,rem,temp,k,p=0;
	printf("enter no:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		k=rem*rem*rem;
		p+=k;
		n=n/10;				
	}
	printf("p=%d\n",p);
	if(p==temp)
	{
			printf("amst");
	}
	else
	{
		printf("not amst");
	}
}
