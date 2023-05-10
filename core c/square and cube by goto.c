#include<stdio.h>
void main()
{
	int i=1,n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	kdn :
		
		printf("%d \t %d\n",i*i,i*i*i);
		i++;
		if(i<=n)
		{
			goto kdn;
		}
		
}
