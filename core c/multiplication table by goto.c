#include<stdio.h>
void main()
{
	int i=1,j,n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	kdn :
		j=n*i;
		printf("%d\n",j);
		i++;
		if(i<=10)
		{
			goto kdn;
		}						
}
