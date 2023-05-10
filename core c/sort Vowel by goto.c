#include<stdio.h>
void main()
{
	int ch='a';
	
	kdn :
		
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			printf("%c\t",ch);
		}
		ch++;
		if(ch>='a' && ch<='z')
		{
			goto kdn;
		}
}
