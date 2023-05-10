#include<stdio.h>
void main()
{
	int i,j,n,no=1;
	char ch='A';
	printf("enter no");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i)+1;j++)
		{
			if(i%2==0)
			{
				printf("%d\t",no);
				no++;
			}
			else
			{
				printf("%c\t",ch);
				ch++;
			}
		}
		printf("\n\n");
	}	
}
