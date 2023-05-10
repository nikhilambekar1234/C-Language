#include<stdio.h>
void main()
{
	int i,n;
	printf("enter no:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d= %d  %d\n",i,i*i,i*i*i);
	}
}
