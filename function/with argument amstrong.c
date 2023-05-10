#include<stdio.h>
void amstrong(int n)
{
	int rem,temp,k,p=0;
	
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
		printf("not");
	}
}
void main()
{
	int n;
	printf("enter no:");
	scanf("%d",&n);
	amstrong(n);
}
