#include<stdio.h>
void main()
{
	int i=1,j,k,n ;
	printf("Enter base and power:");
	scanf("%d%d",&k,&n);
	
	kdn :
		i=i*k;
		j++;
		if(j<=n)
		{
			goto kdn;
		}
		else
		{
			printf("n is the power of k is = %d",i);
		}
	
}
