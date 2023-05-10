#include<stdio.h>
void main()
{
	int arr[10],i;
	int *ptr=arr;
	printf("enter arr\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("\narr\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",*(ptr+i));
	}
}
