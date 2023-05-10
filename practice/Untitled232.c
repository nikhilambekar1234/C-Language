#include<stdio.h>
int palindrome(int n)
{
	int rem;
	static int rev=0;
	if(n==0)
	{
		return rev;
	}
	
	
	rem=n%10;
	rev=rev*10+rem;
	return palindrome(n/10);
	
}
void main()
{
	int n,rev;
	printf("enter num");
	scanf("%d",&n);
	
	rev=palindrome(n);
	if(rev==n)
	{
		printf("palindrome=>%d=%d",n,rev);
		
	}
	else
	{
		printf("not=>%d=%d",n,rev);
	}
	
}
