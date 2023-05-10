#include<stdio.h>
void main()
{
	int i=1,n,sum=0;
	printf("Enter no:");
	scanf("%d",&n);
	i=1;
	while(i<n-1)
	{
      	if(n%i==0)
        {
      		sum+=i;
		}
		i++;
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
