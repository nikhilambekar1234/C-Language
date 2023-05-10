#include<stdio.h>
void main()
{
	int i=0;
	kdn :
		printf("hello world\n");
		
		i++;
		if(i<10)
		{
			goto kdn;
		}
		else
		{
			printf("Thank You");
		}
	
}
