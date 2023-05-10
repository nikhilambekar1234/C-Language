#include<stdio.h>
void main()
{
	int num[10],i;
	printf("Enter num:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("received num\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",num[i]);
	}
	
}
