#include<stdio.h>
int main()
{
	int num[10],i,rev=0,temp,rem;
	printf("Enter num:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("prime num\n");
	for(i=0;i<10;i++)
	{
	    temp=num[i];
	while(num[i]!=0)
	{
		rem=num[i]%10;
		rev=rev*10+rem;
		num[i]=num[i]/10;				
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
}
		   	
