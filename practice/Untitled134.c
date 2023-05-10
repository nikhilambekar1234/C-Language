#include<stdio.h>
void table(int n, int i)
{
	if(i<=10)
	{
		printf("%d\n",n*i);
		return table(n,i+1);
	}	
}
void main()
{
	int n,i=1;
	printf("enter num");
	scanf("%d",&n);
	table(n,i);
}
