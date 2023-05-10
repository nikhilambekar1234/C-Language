#include<stdio.h>
void main()
{
	int i=0,j,n;
	float avg;
	
	kdn :
	
		printf("Enter a number:");
		scanf("%d",&j);
		i+=j;
		n++;
		
		if(n<=5)
		{
			goto kdn;
		}
		else
		{
			avg=(float)i/5;
			printf("%f",avg);
		}
}
