#include<stdio.h>
int palindrome( int n)
{
	int rem,rev=0;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;				
	}
	return rev;	
}
void main()
{
	int n,rev,temp=0;
	printf("enter no:");
	scanf("%d",&n);
	temp=n;
	rev=palindrome(n);
	if(temp==rev)
	{
		printf("number is palindrome");
	}
	else
	{
		printf("not palindrome");
	}
}
