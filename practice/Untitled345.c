#include<stdio.h>
#include<stdlib.h>
void main()
{
	int no,i,n,rem,rev=0,temp,sum=0;
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
		rev=0;
		n=*(ptr+i);
		temp=n;
	    while(n!=0)
	    {
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;				
	    }
    	printf("rev=%d\n",rev);
    	if(temp==rev)
    	{
		   sum+=*(ptr+i);
    	}
	}
	printf("Addition of palindrome numbers = %d\n",sum);
	{
		
		rev=0;
		n=sum;
		temp=n;
	    while(n!=0)
	    {
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;				
	    }
    	printf("rev=%d\n",rev);
    	if(temp==rev)
     	{
		printf("number is palindrome");
    	}
    	else
    	{
		printf("not palindrome");
    	}
	}
}
