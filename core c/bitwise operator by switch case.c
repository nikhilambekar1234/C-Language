#include<stdio.h>
void main()
{
	int op,a,b;
	printf("Enter two no:");
	scanf("%d%d",&a,&b);
	printf("Enter bitwise operator\n1-AND\n2-OR\n3-XOR\n4-TILDE\n5-LEFT SHIFT\n6-RIGHT SHIFT\n:-");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			printf("AND=%d",a&b);
			break;
		case 2:
			printf("OR=%d",a|b);
			break;
		case 3:
			printf("XOR=%d",a^b);
			break;
		case 4:
			printf("TILDE=%d\n",~a);
			printf("TILDE=%d",~b);
			break;
		case 5:
			printf("LEFT SHIFT=%d",a<<b);
			break;
		case 6:
			printf("RIGHT SHIFT=%d",a>>b);
		    break;
		default :
			printf("INVALID NUM");
	}
}
