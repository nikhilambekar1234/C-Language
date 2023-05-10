#include<stdio.h>
void main()
{
	char alpha;
	printf("Enter a character:");
	scanf("%c",&alpha);
	
	if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u' || alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O' || alpha=='U')
	{
		printf("Given character is an vowel");
	}
	else
	{
		printf("Given character is consonant");
	}
}
