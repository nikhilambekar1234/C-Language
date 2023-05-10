#include<stdio.h>
void main()
{
	int i=100,j,key;

		kdn :
		
		printf("enter a key:");
     	scanf("%d",&key);
     	j++;
	
	if(key==i)
	{
		printf("  Congratulation\n You are pass");
	}
	else if(j<3)
	{
		goto kdn;
	}
	else
	{
		printf("  sorry\n You are fail");
	}
}
