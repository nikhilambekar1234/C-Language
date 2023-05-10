#include<stdio.h>
void main()
{
	int n,rem,count=0;
	printf("enter no:");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem=n%10;
		count++;
		n=n/10;				
	}
	printf("Digits present in the number=%d\n",count);
	
}
