#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,max=0,min=0,diff=0;
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
	max=*(ptr+0);
	min=*(ptr+0);
	printf("your data=\n");
	for(i=0;i<n;i++)
	{
		if(*(ptr+i)>max)
		{
			max=*(ptr+i);
		}
		else if(*(ptr+i)<min)
		{
			min=*(ptr+i);
		}
	}
	printf("max=%d\n",max);
	printf("min=%d\n",min);
	printf("diff=%d\n",max-min);
	
}
