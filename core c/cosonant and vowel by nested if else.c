#include<stdio.h>
void main()
{
	char ch;
	printf("enter ch:");
	scanf("%c",&ch);
	if(ch>='A'&& ch<='Z')
	{
		if(ch=='A'|| ch=='E' || ch=='I'  || ch=='O' || ch=='U')
		{
			printf("capital vowel:%c",ch);
			
		}
		else
		{
			printf("capital consonant:%c",ch);
		}
	}
	else
	{
		if(ch>='a' && ch<='z')
		{
				if(ch=='a'|| ch=='e' || ch=='i'  || ch=='o'|| ch=='u')
		   {
				printf("small vowel:%c",ch);
		   }
		else
	 	   {
			printf("small consonant:%c",ch);
		   }
		}
	}
}
