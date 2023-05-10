#include<stdio.h>
int fun(int arr1[],int i,int n)
{
	static int sum=0;
	sum+=arr1[i];
	if(i>=n-1)
	{
		return sum;
	  
	}
	return fun(arr1,i+1,n);	
	
}
void main()
{
	int arr1[10],i=0,sum;
	printf("enter arr");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr1[i]);
	}
	sum=fun(arr1,0,10);
	printf("%d",sum);
}
