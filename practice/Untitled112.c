#include<stdio.h>
void main()
{
	char ch='A',ch1='a';
	printf("enter character:");
	scanf("%d",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("character");
	}
	else if(ch1>='a' && ch<='z')
	{
		printf("character");
	}
	else
	{
		printf("symbol");
	}
}
