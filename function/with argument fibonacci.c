#include<stdio.h>
void fibonacci(int n)
{
	int i=0,j=1,k,m=3;
	
	printf("%d\n",i);
	printf("%d\n",j);
	while(m<=n)
	{
		k=i+j;
		printf("%d\n",k);
		i=j;
		j=k;
		m++;
	}
}
void main()
{
	int n;
	printf("Enter no:");
	scanf("%d",&n);
	fibonacci(n);
}
