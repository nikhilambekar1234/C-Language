#include<stdio.h>
void main()
{
	char ch='A';
	char *ptr=&ch;
    for(*ptr='A';*ptr<='Z';(*ptr)++)
	{
		printf("%c\n",*ptr);
	}
}
