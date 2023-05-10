#include<stdio.h>
int factorial(int n)
{
	int i=1,j=1;
	
	kdn :
		i*=j;
		j++;
		if(j<=n)
		{
			goto kdn;
		}
		else
		{
			return i;
		}
}
int main()
{
	int n,i;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("factorial=%d",factorial(n));
	
}
