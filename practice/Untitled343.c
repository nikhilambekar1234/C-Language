#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,sum=0,temp=0;
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
		if(*(ptr+i)%2==0)
		{
			sum+=*(ptr+i);
		}
		else
		{
			temp+=*(ptr+i);
		}
	}
	printf("even=%d\n",sum);
	printf("odd=%d\n",temp);
	
}
