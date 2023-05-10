#include<stdio.h>
void main()
{
	int arr[5],i;
	int *ptr=arr;
	printf("enter arr\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("\narr\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(ptr+i));
	}
	printf("\nreverse\n");
	for(i=4;i>=0;i--)
	{
		printf("%d\t",*(ptr+i));
	}
}
