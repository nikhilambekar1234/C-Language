#include<stdio.h>
void main()
{
	int i,j,n,no=1;
	char ch='A';
	printf("Enter no:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2!=0)
			{
				printf("%c",ch);
			}
			else
			{
				printf("%d",no);
			}
		}
		ch++;
		no++;
		printf("\n\n");
		
	}
}
