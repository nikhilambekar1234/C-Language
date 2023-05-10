#include<stdio.h>
int main()
{
	int num[10],i,max,min;
	printf("Enter num:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	min=num[0];
	for(i=0;i<10;i++)
	{
		if(num[i]<min)
		{
			min=num[i];
		}
	}
	printf("min=%d\n",min);		   
}
		   	
