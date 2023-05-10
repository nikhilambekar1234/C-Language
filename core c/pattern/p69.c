#include<stdio.h>
void main()
{
	int i,j,n;
	char ch='A';
	printf("enter no");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i)+1;j++)
		{
			if(j==1||i==1)
			{
				printf("*\t");
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
