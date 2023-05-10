#include<stdio.h>
void main()
{
	int i=1,n,count=0;
	printf("Enter a no:");
	scanf("%d",&n);
	while(i<=n)
	{
		count+=i;
		i++;
	
	}
		printf("%d",count);
}
