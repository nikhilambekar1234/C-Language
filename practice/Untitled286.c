#include<stdio.h>
void main()
{
	int i,j,k,n;
	char ch='A';
	printf("enter num");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=(2*i)-1;k++)
		{
			if(k%2!=0 || i==n)
			{
			    printf("*");	
			}
			else
			{
				printf("%c",ch);
				ch++;
			}
			
		}
		printf("\n");
	}

}
