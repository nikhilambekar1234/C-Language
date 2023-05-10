#include<stdio.h>
int main()
{
	int num[10],i;
	printf("Enter num:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
	   if(num[i]%2==0)
	   printf("Even=%d\n",num[i]);
	}
			   
}
		   	
