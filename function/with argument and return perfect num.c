#include<stdio.h>
int perfect(int n)
{
	int i=1,sum=0;
	
	for(i=1;i<n-1;i++)
	{
      	if(n%i==0)
        {
      		sum+=i;
		}
	}
	return sum;
	
}
void main()
{
	int n,sum;
	printf("Enter no:");
	scanf("%d",&n);
	sum=perfect(n);
	
	if(sum==n)
	{
		printf("Perfect number = %d",n);
	}
	else
	{
		printf("Not perfect number = %d",n);
	}
}
