#include<stdio.h>
void main()
{
	int max,min,i;
	printf("Enter max and min no:");
	scanf("%d%d",&max,&min);
	printf("___________________________________ \n");
	for(i=max;i>min;i--)
	{
		if(max>i)
		{
			printf("%d\n",i);
		}
	}
	
}

