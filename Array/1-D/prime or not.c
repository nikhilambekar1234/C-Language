#include<stdio.h>
int main()
{
	int num[10],i,n=0,count=0;
	printf("Enter num:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
		if(num[i]%2!=0)
		{
			n=n+num[i];
		}	
	}
	printf("addition of all odd num = %d\n",n);
	for(i=1;i<n;i++)
	{ 
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==1)
	{
		printf("prime no = %d",n);
	}
	else
	{
		printf("not prime no = %d",n);
	}
	   
}
		   	
