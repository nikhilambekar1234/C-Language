#include<stdio.h>
void main()
{
	int n,rem,rev=0,temp;
	printf("enter no:");
	scanf("%d",&n);
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
