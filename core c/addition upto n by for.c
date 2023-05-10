#include<stdio.h>
void main()
{
	int i=1,n,count=0;
	printf("Enter no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		count+=i;
		
	}
	printf("Addition of all no=%d",count);
}
