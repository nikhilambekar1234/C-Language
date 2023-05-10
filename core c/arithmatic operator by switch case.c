#include<stdio.h>
void main()
{
	int op,a,b;
	float DIV;
	printf("Enter two no:");
	scanf("%d%d",&a,&b);
	printf("Enter arithmatic operator\n1-ADD\n2-SUB\n3-MULT\n4-DIV\n5-MODE\n:-");
	scanf("%d",&op);
	switch(op)
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
		default :
		    printf("INVALID NUM");				
	}

	
}
