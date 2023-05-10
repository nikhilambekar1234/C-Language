#include<stdio.h>
void main()
{
	int a,b,op;
	printf("Enter two no:");
	scanf("%d%d",&a,&b);
	printf("enter op:\n");
	printf("1-and\n2-or\n3-xor\n4-left shift\n5-right shift\n6-tilde\n:-");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
			printf("%d\n",a&b);
			break;
		case 2:
			printf("%d\n",a|b);
			break;
		case 3:
			printf("%d\n",a^b);
			break;
		case 4:
		     printf("%d\n",a<<b);
			 break;
		case 5:
		     printf("%d\n",a>>b);
			 break;
		case 6:
				printf("%d\n",~a);
            	printf("%d\n",~b);
            	break;
        default :
		        printf("invalid op");    	
	}	
}
