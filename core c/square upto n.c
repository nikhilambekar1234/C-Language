#include<stdio.h>
void main()
{
	int i=1,n;
	printf("Enter no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d=%d\n",i,i*i);
	}
}
