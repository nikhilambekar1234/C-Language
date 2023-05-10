#include<stdio.h>
void fun(int *n)
{
	int i,count=0;
	for(i=1;i<=(*n);i++)
	{
		if((*n%i)==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("prime no");
	}
	else
	{
		printf("not prime no");
	}
}
int main()
{
	int a;
	printf("enter no\n");
	scanf("%d",&a);
	fun(&a);	
}
