#include<stdio.h>
void factorial(int n)
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
			printf("%d",i);
		}
}
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	factorial(n);
}
