#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter num:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	if(sum%2==0)
	{
		printf("even sum=%d",sum);
	}
	else
	{
		printf("Odd sum=%d",sum);
	}
}
