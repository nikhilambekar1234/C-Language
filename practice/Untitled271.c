#include<stdio.h>
void main()
{
	int arr1[10],arr2[10],i,j;
	printf("enter arr1");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("\n copy element arr1 to arr2...\n");
	for(i=0;i<10;i++)
	{
		arr2[i]=arr1[i];
	}
	printf("\narr1[%d]  -->  arr2[%d]\n",10,10);
	for(i=0;i<10;i++)
	{
		printf("%4d\t\t-->%4d\n",arr1[i],arr2[i]);
	}
	
}
