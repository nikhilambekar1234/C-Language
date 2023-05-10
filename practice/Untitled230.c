#include<stdio.h>
int main()
{
	int n[3][3],i,j,temp=0,count=0;
	printf("enter num");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&n[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i=j && n[i][j]==1)
			{
				count++;
			}
		else if(i!=j && n[i][j]==0)
			{
				temp++;
			}
		}
		printf("\n");
	}
	if(count==3 && temp==6)
	{
		printf("identity");
	}
	else
	{
		printf("not");
		
	}
	return 0;
}
