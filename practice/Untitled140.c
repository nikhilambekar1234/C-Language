#include<stdio.h>
int palindrome(int n)
{
	int rem,even=0,odd=0;
	
	if(n==0) 
	return ;
	rem=n%10;
	if(rem%2==0)
	{
		even+=rem;
	}
	
	
	return even+palindrome(n/10);
	
}
void main()
{
	int n,rev;
	printf("enter num");
	scanf("%d",&n);
	rev=palindrome(n);
	if(rev==n)
	{
		printf("number is palindrome=>  %d=%d",n,rev);
	}
	else
	{
		printf("not palindrome=>  %d!=%d",n,rev);
	}
}
