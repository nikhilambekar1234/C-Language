#include<stdio.h>
#include<stdlib.h>
void main()
{
	int no,i,j=1,count,n;
	int *ptr=NULL;
	printf("enter no of size");
	scanf("%d",&no);
	
	ptr=(int*)calloc(no,sizeof(int));
	if(ptr==NULL)
	{
		printf("memory not allocated");
	}
	else
	{
		printf("memory allocated successfully");
	}
	printf("\nenter num\n");
	for(i=0;i<no;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("your data=\n");
	for(i=0;i<no;i++)
	{
		n=*(ptr+i);
		count=0;
		j=1;
     	while(j<=n)
    	{
	    	if(n%j==0)
	     	{
		    	count++;
	    	}
	    	j++;
	   }
       if(count==2)
     	{
	    	printf("%d\n",*(ptr+i));
	    }
	}	
}
