#include<stdio.h>
void main()
{
	int PIN=1234,op,newpin;
	printf("enter op\n1-pin\n");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
			printf("Enter newpin:");
			scanf("%d",&newpin);
			PIN=newpin;
			
			if(PIN!=1234)
			{
				printf("newpin generated=%d",PIN);
			}
			else
			{
				printf("old pin\ntry again\n");
			}
			break;
			
		default :	
		     printf("invalid op");
	}
}
