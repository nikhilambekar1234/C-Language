#include<stdio.h>
void main()
{
	int PIN=1234,newpin,op;
	printf("enter op\n1-pin\n");
	scanf("%d",&op);
	
	
	
	switch(op)
	{
		case 1:
			printf("enter newpin\n");
			scanf("%d",&newpin);
			PIN=newpin;
			if(PIN!=1234)
			{
			   printf("NEW PIN generated=%d\n",PIN);	
			}
			else
			{
				printf("OLD PIN=%d\n",PIN);
				printf("Not new pin generated");
			}
			break;
			
		default :
		         printf("invalid op");	
	}
}
