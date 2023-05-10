#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i;
	int *ptr=NULL;
	printf("enter no of size");
	scanf("%d",&n);
	
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("memory not allocated");
	}
	else
	{
		printf("memory allocated successfully");
	}
	printf("\nenter num\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("your data=\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(ptr+i));
	}
	
}
