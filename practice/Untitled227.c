#include<stdio.h>
void main()
{
	int max,min,i;
	printf("enter max and min");
	scanf("%d%d",&max,&min);
	
	for(i=min;i<max;i++)
	{
		if(i>min)
		{
			printf("%d\n",i);
		}
	}
}
