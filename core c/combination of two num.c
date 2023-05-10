#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter no:");
	scanf("%d",&n);
	for(i=1,j=n-1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(i!=j && i+j==n)
     		{
			printf("%d+%d\n",i,j);
	    	}
		}
	
	
	}
}
