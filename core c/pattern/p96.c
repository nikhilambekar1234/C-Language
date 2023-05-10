#include<stdio.h>
int main()
{
	int i,j,n,no=1;
	char ch='A';
	printf("enter no");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		no=1;
		ch='A';
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("%c",ch);
				ch++;
			}
			else
			{
				printf("%d",no);
			}
			no++;	
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		no=1;
		ch='A';
		for(j=1;j<=(n-i)+1;j++)
		{
			if(j%2==0)
			{
				printf("%c",ch);
				ch++;
		  	}
			else
			{
				printf("%d",no);
			}
			no++;
		}
		printf("\n");
	}	
	return 0;
}
