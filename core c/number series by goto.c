#include<stdio.h>
void main()
{
	int i=1,n;
	
	printf("enter no:");
	scanf("%d",&n);
	kdn :
	      
		printf("%d\n",i++);
		
		
		if(i<=n)
		{
			goto kdn;
		}
		else
		{
			printf("Thank You");
		}
	
}
