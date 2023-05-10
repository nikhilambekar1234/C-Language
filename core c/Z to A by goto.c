#include<stdio.h>
void main()
{
	char ch='Z';
	
	kdn :
		printf("%c\n",ch);
		ch--;
		if(ch>='A' && ch<='Z')
		{
			goto kdn;
		}
}
