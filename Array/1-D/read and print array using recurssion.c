#include<stdio.h>
int fun(int arr1[] ,int i , int n)
{
	if(i<n)
	{
		printf("%d\t",arr1[i]);
	    fun( arr1,i+1,n);
	}	
}
void main()
{
	int arr1[10],i=0,result;
	printf("enter arr");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr1[i]);
	}
	fun(arr1,0,10);
}
