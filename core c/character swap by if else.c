#include<stdio.h>
int main()
{
	char alpha;
	printf("Enter a chracter:");
	scanf("%c",&alpha);
	
	if(alpha>='a'  &&  alpha<='z')
	{
		alpha-=32;
		printf("UPPER CASE = %c",alpha);
	}
	else
	{
		alpha+=32;
		printf("LOWER CASE = %c",alpha);
	}
}
