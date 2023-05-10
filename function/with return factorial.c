#include<stdio.h>
int factorial()
{
	int i=1,j=1,n;
	printf("Enter a number:");
	scanf("%d",&n);
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
void main()
{
	printf("factorial=%d",factorial());
}
