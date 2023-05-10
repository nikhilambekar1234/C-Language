#include<stdio.h>
void main()
{
	int max,min,i;
	printf("Enter max and min no respectively:");
	scanf("%d%d",&max,&min);
	printf("________________________________________________\n");
	i=max;
	while(i>min)
	{
		if(max>i)
		{
			printf("%d\n",i);
		}
	    i--; 
	}
}
