#include<stdio.h>
void main()
{
	int i=10,n;
	printf("Enter a no:");
	scanf("%d",&n);
	while(i>=1)
	{
		printf("%d*%d=%d\n",n,i,n*i);
		i--;
	}
}
