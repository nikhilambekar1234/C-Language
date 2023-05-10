#include<stdio.h>
void main()
{
	int a[10],i,j;
	int *ptr=a;
	printf("enter element\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("arr\n");
	for(i=0;i<10;i++)
	{
		if((*(ptr+i))%2==0)
		{
			printf("%d\t",(*(ptr+i)));
		}
	}
}
