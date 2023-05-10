#include<stdio.h>
void main()
{
	int i=0,n;
	printf("enter no:");
	scanf("%d",&n);
	kdn :
		printf("hello world\n");
		
		i++;
		if(i<n)
		{
			goto kdn;
		}
		else
		{
			printf("Thank You");
		}
	
}
