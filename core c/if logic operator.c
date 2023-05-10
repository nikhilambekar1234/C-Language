#include<stdio.h>
void main()
{
	int i=1,n;
	printf("enter no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==1 && i%5==0)
		{
			printf("%d\n",i);
		}
	}
}
