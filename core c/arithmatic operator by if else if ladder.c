#include<stdio.h>
void main()
{
	int a,b,no;
	float div;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	printf("1-add\n 2-sub\n 3-mult\n 4-div\n 5-mode\n:");
	scanf("%d",&no);
	if(no==1)
	{
		printf("Addition = %d",a+b);
	}
	else if(no==2)
	{
		printf("Subtraction = %d",a-b);
	}
	else if(no==3)
	{
		printf("Multipication = %d",a*b);
	}
	else if(no==4)
	{ 
	     div=(float)a/b;
		printf("Division = %f",div);
	}
	else if(no==5)
	{  
		printf("Mode = %d",a%b);
	}
	else
	{
		printf("Invalid Operator");
	}
	
	
}
