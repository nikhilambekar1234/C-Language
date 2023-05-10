#include<stdio.h>
void main()
{
	int marks[5];
	int i;
	printf("enter marks\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);
	}
	printf("your marks are\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",marks[i]);
	}
}
