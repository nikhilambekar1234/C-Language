#include<stdio.h>
int fun(int i,int n) //function defination
{  
    if(i==n)
    {
    	printf("%d\n",i);
	}
	else
	{
		printf("%d\n",i);
		return fun(i+2,n);
	}	
}
void main()
{
	int n,i=0;
	printf("enter num");
	scanf("%d",&n);
	if(n%2!=0)
	{
		n=n-1;
	}

	fun(i,n);	
}
