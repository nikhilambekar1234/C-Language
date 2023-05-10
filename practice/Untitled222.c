#include<stdio.h>
void main()
{
	int n,op;
	printf("enter op\n1=0-10\n2=11-18\n3=19-59\n");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
			printf("no ticket");
			break;
			
		case 2:
		    printf("half ticket");
			break;
		
		case 3:
		    printf("full ticket");
			break;
			
		default :
		    printf("invalid age");			
	}
}
