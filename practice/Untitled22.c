#include<stdio.h>
void main()
{
	int i=1,n,sum=0;
	printf("Enter no:");
	scanf("%d",&n);
	kdn :
	while(n%i==0)
	{
		sum+=i;
        for(i=1;i<n-1;i++);
        goto kdn;
    
	}
	printf("%d\n",sum);
	if(sum==n)
	{
		printf("Perfect number = %d",n);
	}
	else
	{
		printf("Not perfect number = %d",n);
	}
	
}
