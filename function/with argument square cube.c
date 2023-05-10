#include<stdio.h>
void squarecube(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("%d= %d  %d\n",i,i*i,i*i*i);
	}
}
void main()
{
	int n;
	printf("enter no:");
	scanf("%d",&n);
	squarecube(n);
}
