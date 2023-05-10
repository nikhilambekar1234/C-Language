#include<stdio.h>
void main()
{
	int i=0,j=1,n;
	
	printf("enter no:");
	scanf("%d",&n);
	
	kdn :
		
		i+=j;
		j++;
		if(j<=n)
		{
			goto kdn;
		}
		else
		{
			printf("addition of all no:%d",i);
		}
		
}
