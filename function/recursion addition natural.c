#include<stdio.h>
int addition(int n)
{
	static int i=1;
	{
    	printf("+%d\n",i);
		i++;
	}
	
	if(n==1)
      	return 1;
	else 
	    return n+addition(n-1);
	
}
void main()
{
	int n,sum;
	printf("enter num");
	scanf("%d",&n);
	sum=addition(n);
	printf("total=%d",sum);
	
}
