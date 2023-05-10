#include<stdio.h>
int fibonacci()
{
	int i=0,j=1,k,n,m=3;
	printf("Enter no:");
	scanf("%d",&n);
	printf("%d\n",i);
	printf("%d\n",j);
	return n;
	
}
void main()
{
	int i=0,j=1,k,n,m=3;
	n=fibonacci();
	while(m<=n)
	{
		k=i+j;
		printf("%d\n",k);
		i=j;
		j=k;
		m++;
	}
}
