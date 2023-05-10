#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,max=0;
	int *size=NULL;
	printf("enter num\n");
	scanf("%d",&n);
	
	size=(int*)calloc(n,sizeof(int));
	if(size==NULL)
	{
		printf("memory insufficient\n");
	}
	else
	{
		printf("memory alloted\n");
	}
	
	printf("enter num\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(size+i));
	}
	printf("data\n");
	max=*(size+0);
	for(i=0;i<n;i++)
	{
		if(*(size+i)>max)
		{
			max=*(size+i);
		}
	
	}
		printf("max=%d\n",max);
	
}