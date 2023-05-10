#include<stdio.h>
void palindrome( int n)
{
	int rem,rev=0,temp;
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
		printf("number is palindrome");
	}
	else
	{
		printf("not palindrome");
	}
}
void main()
{
	int n;
	printf("enter no:");
	scanf("%d",&n);
	palindrome(n);
}
