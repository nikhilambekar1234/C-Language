#include<stdio.h>
void fibonacci()
{
	int i=0,j=1,k,n,m=3;
	printf("Enter no:");
	scanf("%d",&n);
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
	fibonacci();
}
