#include<stdio.h>
void main()
{
	int op,a,b;
	float div;
	printf("Enter two no:");
	scanf("%d%d",&a,&b);
	printf("1-add\n2-sub\n3-mult\n4-div\n5-mode\nEnter op\n:-");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
			printf("add=%d",a+b);
			break;
			
		case 2:
			printf("sub=%d",a-b);
			break;
			
		case 3:
			printf("mult=%d",a*b);
			break;
			
		case 4:
			div=(float)a/b;
			printf("div=%f",div);
			break;
			
		case 5:
			printf("mode=%d",a%b);
			break;	
						
		default :
			printf("Invalid op");
	}
}
