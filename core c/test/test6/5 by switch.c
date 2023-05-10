#include<stdio.h>
void main()
{
	int op;
	printf("1=>0-10\n2=>11-18\n3=>19-59\nenter op\n:-");
	scanf("%d",&op);

	switch(op)
	{
		case 1:
			printf("No ticket");
			break;
			
		case 2:
			printf("Half ticket");
			break;
			
		case 3:
			printf("Full ticket");
			break;		
			
		default :
		     printf("Invalid age");
	}
}
