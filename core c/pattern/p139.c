#include<stdio.h>
void main()
{
	int  n,i,j,k,no,m;
	printf("enter num:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		no=i;
		m=5;
		for(j=1;j<=(n-i)+1;j++)
		{
			printf("%d\t",no);
			no++;
			
		}
		for(k=1;k<i;k++)
		{
			printf("\t");
		}
		for(k=2;k<i;k++)
		{
			printf("\t");
		}
		for(j=1;j<=(n-i)+1;j++)
		{  
		    if(j==1 && i==1)
		   {
		   	
	    	}
		else
			printf("%d\t",m);
			m--;
		}
		printf("\n\n");
		
	}
}
