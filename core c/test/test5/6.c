#include<stdio.h>
void main()
{
	int n;
	printf("enter no: ");
	scanf("%d",&n);
	
	if(n%5==0 && n%11==0)
	{
		printf("divisible by 5 and 11=%d",n);
	}
	else if(n%11==0)
	{
		printf(" divisible by 11=%d",n);
	}
	else if(n%5==0)
	{
		printf(" divisible by 5=%d",n);
	}
	else
	{
		printf(" not divisible by 11 & 5=%d",n);
	}
	
}
