#include<stdio.h>
#include<stdlib.h>
void main()
{
	int no,i,j=1,c=0,n;
	int *ptr=NULL;
	printf("enter size\n");
	scanf("%d",&no);
	
	ptr=(int*)calloc(no,sizeof(int));
	if(ptr==NULL)
	{
		printf("memory not alloted\n");
	}
	else
	{
		printf("memory alloted\n");
	}
	printf("enter num\n");
	for(i=0;i<no;i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<no;i++)
	{
		n=*(ptr+i);
		c=0;
		j=1;
		while(j<=n)
		{
			if(n%j==0)
			{
				c++;
			}
			j++;
		}
		if(c==2)
		{
			printf("%d\n",n);
		}
	}
}
