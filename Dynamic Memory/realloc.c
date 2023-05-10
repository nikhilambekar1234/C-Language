#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,ch;
	int *ptr=NULL;
	printf("enter no of size");
	scanf("%d",&n);
	
	ptr=(int*)calloc(n,sizeof(int));
	kdn :
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
	alpha :
		printf("enter choice 1-realloc & 0-exit");
		scanf("%d",&ch);
		
		if(ch==1)
		{
			printf("ENTER NEW CHOICE");
			scanf("%d",&n);
			ptr=realloc(ptr,n);
			goto kdn;
		}
		else if(ch==0)
		{
			printf("thank");
			free(ptr);
		}
		else
		{
			printf("invalid choice\n");
			goto alpha;
		}
	
}
