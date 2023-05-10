#include<stdio.h>
int main()
{
	int num[10],i,max,min;
	printf("Enter num:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
		min=num[0];
		if(num[i]<min)
		{
		   min=num[i];	  
		}
	}
	printf("max=%d\n",min);		   
}
		   	
