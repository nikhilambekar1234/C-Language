#include<stdio.h>
void main()
{
	int arr1[10],arr2[5],arr3[15],i;
	printf("enter arr1\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("\nenter arr2\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr2[i]);
	}
	printf("\nmerge arr1 & arr2 and show in arr3\n");
	for(i=0;i<10;i++)
	{
		arr3[i]=arr1[i];
		arr3[i+10]=arr2[i];
	}
	for(i=0;i<15;i++)
	{
		printf("%d\t",arr3[i]);
	}
}
