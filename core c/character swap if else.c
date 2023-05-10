#include<stdio.h>
int main()
{
	char alpha,LOWER,UPPER;
	printf("Enter a character:");
	scanf("%c",&alpha);
	
	
	
	if(alpha>='A' && alpha<='Z')
	{
		LOWER=alpha+32;
		
		
		printf("%c",LOWER);
		
		
		
		
	}
	else
	{
		UPPER=alpha-32;
		printf("%c",UPPER);
		return 0;
	}
}
