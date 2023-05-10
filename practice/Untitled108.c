#include<stdio.h>
void main()
{
	char ch;
	if(ch>='A' && ch<='Z')
	{
		if(ch!='A'||ch!='E'||ch!='I'||ch!='O'||ch!='U')
		 {
		 		printf("conso=%c\n",ch);
		 }
		 else
		 {
		 	printf("vowel=%c",ch);
		 }
		 ch++;
	}
}
