#include<stdio.h>
void main()
{
	char A,B,null;
	printf("Enter first character:");
	scanf("%c",&A);
	
	scanf("%c",&null);
	
	printf("Enter second character:");
	scanf("%c",&B);
	
	if(A==B)
	{
		printf("Both characters are Same");
	}
	else
	{
		printf("Both characters are different");
	}
	
}
