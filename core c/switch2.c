#include<stdio.h>
void main()
{
	int ch;
	printf("enter choice from 1,2,3\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("hello");
			break;
			
		case 2:
			printf("hi");
			break;
			
		case 3:
			printf("how are u");
			break;	
			
		default:
		    printf("wrong input");	
			break;	
	}
}
