#include<stdio.h>
int perfectnum()
{
	int i=1,n,sum=0;
	printf("Enter no:");
	scanf("%d",&n);
	return n;
	
}
void main()
{
	int i=1,n,sum=0;
	
	n=perfectnum();
	for(i=1;i<n-1;i++)
	{
      	if(n%i==0)
        {
      		sum+=i;
		}
	}
	if(sum==n)
	{
		printf("Perfect number = %d",n);
	}
	else
	{
		printf("Not perfect number = %d",n);
	}
}
