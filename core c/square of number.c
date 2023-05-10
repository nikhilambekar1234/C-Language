#include<stdio.h>
void main()
{
	int i=1,n;
	printf("Enter no:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d=%d\n",i,i*i);
		i++;
	}
}
