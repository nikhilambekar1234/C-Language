#include<stdio.h>
void main()
{
	int marks[10];
	int i;
	printf("enter marks\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&marks[i]);
	}
	printf("your marks are\n");
	for(i=0;i<10;i++)
	{
		if(marks[i]%2==0)
		printf("%d\n",marks[i]);
	}
}
