#include<stdio.h>
#include<stdlib.h>
void main( int argc,char *argv[])
{
    int n,rem,rev=0,temp,p=0,k=0;
    n=atol(argv[1]);
    temp=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;				
	}
	printf("rev=%d\n",rev);
	if(temp==rev)
	{
		printf("number is palindrome\n");
	}
	else
	{
		printf("not palindrome\n");
	}
	if(n%2==0)
	{
		printf(" even\n");
	}
	else
	{
		printf("odd\n");
	}
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

