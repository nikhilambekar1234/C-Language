#include<stdio.h>
void main()
{
	int n,i,j,sum=0,temp,rem;
	printf("Enter no:");
	scanf("%d",&n);
	temp=n;
	
	while(n!=0)
	{
		rem=n%10;
		
		for(j=1,i=1;j<=rem;j++)
		{
			i*=j;
		}
		sum+=i;
		n=n/10;
	}
	printf("Total=%d\n",sum);
	if(temp==sum)
	{
		printf("Strong Number=%d",temp);
	}
	else
	{
		printf("Not strong number=%d",temp);
	}
	
}
