#include<stdio.h>
#include<stdlib.h>
void main()
{
	int no,i,n,rem,temp,k,p=0;;
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
		p=0;
		n=*(ptr+i);
		temp=n;
     	while(n!=0)
    	{  
		rem=n%10;
		k=rem*rem*rem;
		p+=k;
		n=n/10;				
    	}
    	printf("p=%d\n",p);
	    if(p==temp)
    	{
			printf("amst=%d\n",*(ptr+i));
	    }
	    else
	    {
		    printf("not amst=%d\n",*(ptr+i));
	    }
    }
	
}
