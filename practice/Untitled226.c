#include<stdio.h>
void main()
{
	int i,n;
	printf("enter num:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d=>%d",i,i*i);
	}
}
