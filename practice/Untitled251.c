#include<stdio.h>
void main()
{
	int arr[3][3],i,n,j;
	printf("enter arr");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("enter num");
	scanf("%d",&n);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]==n)
			{
				printf("search\n");
				break;
			}
			else if(arr[i][j]!=n)
            {
	           	printf("not");
           	}
			
		}
		
		
	}
	

	
}
