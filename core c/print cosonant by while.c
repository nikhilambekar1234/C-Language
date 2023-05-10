#include<stdio.h>
void main()
{
	char ch='A';
	while(ch>='A'&& ch<='Z')
	{
		if(ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&ch!='U')
		printf("%c\n",ch);
		ch++;
	}
}
