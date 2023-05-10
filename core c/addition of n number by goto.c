#include<stdio.h>
void main()
{
	int i=0,j=0,n;
	printf("Ente a number:");
	scanf("%d",&n);
	kdn:
		
	
		i+=j;
		j++;
		if(j<=n)
		{
			goto kdn;
		
		}
		else
		{
			printf("Addition of all numbers = %d",i);
		}
}
