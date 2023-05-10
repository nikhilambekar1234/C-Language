#include<stdio.h>
void main()
{
	int ch;
	printf("enter choice from ch>=1 && ch<=12 \n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("jan=31");
			break;
			
		case 2:
			printf("feb=28");
			break;
			
		case 3:
			printf("march=31");
			break;	
		
		case 4:
			printf("april=30");
			break;	
			
		case 5:
			printf("may=31");
			break;	
			
		case 6:
			printf("june=30");
			break;	
			
		case 7:
			printf("july=31");
			break;	
			
		case 8:
			printf("aug=31");
			break;	
			
		case 9:
			printf("sep=30");
			break;	
			
		case 10:
			printf("oct=31");
			break;	
			
		case 11:
			printf("nov=30");
			break;	
			
		case 12:
			printf("dec=31");
			break;										
		default:
		    printf("wrong input");	
			break;	
	}
}	
	
	

