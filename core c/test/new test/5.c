#include<stdio.h>
void main()
{
	int i,j,k,n,no=1;
	char ch='A';
	printf("Enter no:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=(2*i)-1;k++)
		{
			if(i%2==0)
			{
				printf("%d",no);
				no++;
			}
			else
			{
				printf("%c",ch);
			}
		}
		if(i%2!=0)
		{
			ch++;
		}
		printf("\n");
	}
}
