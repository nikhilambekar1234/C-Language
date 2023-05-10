#include<stdio.h>
void perfect(int n)
{
	int i=1,sum=0;
	
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
void main()
{
	int n;
	printf("Enter no:");
	scanf("%d",&n);
	perfect(n);
}
