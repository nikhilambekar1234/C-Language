#include<stdio.h>
void main()
{
	int  n,i,j,no;
	printf("enter num:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		no=i;
		for(j=1;j<=(n-i)+1;j++)
		{
			printf("%d",no);
			no++;
			
			
		}
		
		
		printf("\n");
	}
}
