#include<stdio.h>
void main()
{
	int i=1,j=1,n;
	printf("Enter a number:");
	scanf("%d",&n);
	kdn :
		i*=j;
		j++;
		if(j<=n)
		{
			goto kdn;
		}
		else
		{
			printf("%d",i);
		}
}
