#include<stdio.h>
void main()
{
	int i=1,n,sum=0;
	printf("Enter no:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
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
