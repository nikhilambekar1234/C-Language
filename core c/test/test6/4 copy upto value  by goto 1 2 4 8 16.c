#include<stdio.h>
void main()
{
	int i=1,j=1,n;
	printf("Enter no:");
	scanf("%d",&n);
	printf("%d\n",j);
	
	kdn :
		j=j*2;
		printf("%d\n",j);
		
		if(j<n)
		{
			goto kdn;
		}
}
