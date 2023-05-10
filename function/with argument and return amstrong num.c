#include<stdio.h>
int amstrong(int n)
{
	int rem,k,p=0;
	while(n!=0)
	{
		rem=n%10;
		k=rem*rem*rem;
		p+=k;
		n=n/10;				
	}
	return p;
}
void main()
{
	int n,p,temp;
	printf("enter no:");
	scanf("%d",&n);
	temp=n;
	p=amstrong(n);
	if(p==temp)
	{
			printf("amst");
	}
	else
	{
		printf("not");
	}
}
