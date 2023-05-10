#include<stdio.h>
void main()
{	int arr1[3][3],sum1=0,sum2=0,add,i,j,n,temp,rem,rev=0;
	printf("Enter first array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&arr1[i][j]);
	}
	printf("arr1\n");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	  	printf("%d\t",arr1[i][j]);
	  }
	  printf("\n");
	}
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	  	if(i==j)
	  	{
	  		sum1=sum1+arr1[i][j];
	  		
		}
		else if(i+j==3-1)
		{
			sum2=sum2+arr1[i][j];
		}
	  }
	}
	add=sum1+sum2;
	printf("addition of diagoal element = %d\n",add);
	if(add%2==0)
	{
		printf("addition is even\n");
		n=add;
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
	else
	{
	    printf("addition is odd\n");
		printf("square of given matrix\n");
	    for(i=0;i<3;i++)
     	{
	        for(j=0;j<3;j++)
	        {
	        	printf("%d\t",arr1[i][j]*arr1[i][j]);
	        }
	        printf("\n");
	    }
		n=add;
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
