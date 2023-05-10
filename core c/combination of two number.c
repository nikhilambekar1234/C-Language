#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter no:");
	scanf("%d",&n);
	i=1,j=n-1;
	while(i<n)
	{
		if(i!=j && i+j==n)
		{
			printf("%d+%d\n",i,j);
		}
		i++,j--;
	}
}
