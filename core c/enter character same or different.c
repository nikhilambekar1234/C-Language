#include<stdio.h>
void main()
{
	char A,B,null;
	printf("enter first character:");
	scanf("%c",&A);
	scanf("%c",&null);
	printf("enter second character:");
	scanf("%c",&B);
	printf("-----------------------------------------------\n");
	
    printf("Given first character=%c\n",A);
	printf("Given second character=%c\n",B);
	
	printf("-----------------------------------------------\n");
	if(A==B)
	{
		printf("Given characters are same");
	}
	else
	{
		printf("Given characters are different");
	}

	
}
