#include<stdio.h>
void main()
{
	int i,j,n,no=1,m=1;
	char ch='A';
	printf("Enter no:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(no%2!=0)
			{
				printf("%c\t",ch);
				ch++;
			}
			else
			{
				printf("%d\t",m);
				m++;
			}
			no++;
		}		
		printf("\n\n");
	}
}
