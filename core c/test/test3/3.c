#include<stdio.h>
void main()
{
	int n,i=1;
	printf("Enter no:");
	scanf("%d",&n);
	
	kdn :
		printf("%d*%d=%d\n",n,i,n*i);
		
	i++;
    if(i<=10)	
	{	
		goto kdn;
	}	
}
