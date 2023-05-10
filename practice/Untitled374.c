#include<stdio.h>
void main()
{
	int n[10],i,rev=0,rem=0,temp=0,sum=0;
	
	printf("enter ten num");
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<10;i++)
	{
		temp=n[i];
		rev=0;
		while(n[i]!=0)
		{
			rem=n[i]%10;
			rev=rev*10+rem;
			n[i]=n[i]/10;
		}
		if(temp==rev)
		{
			printf("palindrome=%d=>%d\n",temp,rev);
			sum=sum+rev;
		}
	}
	printf("sum=%d\n",sum);
	temp=sum;
	rev=0;
	while(sum!=0)
	{
		rem=sum%10;
		rev=rev*10+rem;
		sum=sum/10;
	}
	if(temp==rev)
	{
		printf("palindrome sum");
	}
	else
	{
		printf("not palindrome");
	}
}
