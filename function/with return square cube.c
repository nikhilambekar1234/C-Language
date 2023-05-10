#include<stdio.h>
int squarecube()
{
	int i,n;
	printf("enter no:");
	scanf("%d",&n);
	return n;
	
	
}
void main()
{
	int i,n;
	n=squarecube();
	for(i=1;i<=n;i++)
	{
		printf("%d= %d  %d\n",i,i*i,i*i*i);
	}
}
