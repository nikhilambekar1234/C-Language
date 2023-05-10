#include<stdio.h>
void main()
{
	int op,key;
	int a,b;
	float DIV;
	printf("Enter two no:");
	scanf("%d%d",&a,&b);
	printf("Enter:\n1-Arithmatic Operator\n2-Bitwise Operator\n:-");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			printf("Welcome to perform arithmatic oprtation\n");
			printf("Enter:\n1-ADD\n2-SUB\n3-MULT\n4-DIV\n5-MODE\n:-");
			scanf("%d",&key);
			switch(key)
			{
				case 1:
					printf("ADD=%d",a+b);
					break;
				case 2:
					printf("SUB=%d",a-b);
					break;
				case 3:
					printf("MULT=%d",a*b);
					break;
				case 4:
					DIV=(float)a/b;
					printf("DIV=%f",DIV);
					break;
				case 5:
					printf("MODE=%d",a%b);
					break;		
			}
			break;
		case 2:
			printf("Welcome to perform bitwise oprtation\n");
			printf("Enter:\n1-AND\n2-OR\n3-XOR\n4-TILDE\n5-LEFT SHIFT\n6-RIGHT SHIFT\n:-");
			scanf("%d",&key);
			switch(key)
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
			}
			break;
		default:
			printf("INVALID OPERATOR");
	}
}
