#include<stdio.h>
void main()
{
	int i=1,n;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	kdn :
	    if(i%2==0)
	    {
	    		printf("%d\n",i);
		}
	
		i++;
		if(i<=n)
		{
			goto kdn;
		}
}
