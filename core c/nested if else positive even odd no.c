#include<stdio.h>
void main()
{
	int n;
	printf("enter no:");
	scanf("%d",&n);
	if(n>=0)
	{
		if(n%2==0)
		{
			printf("+ve even no");
		}
		else
		{
			printf("+ve odd no");
		}
	}
	else
	{
		printf("-ve no\n");
		printf("positive no =%d",-n);
	}
}
