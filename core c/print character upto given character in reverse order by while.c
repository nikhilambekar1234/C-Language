#include<stdio.h>
void main()
{
	char ch='Z',n;
	printf("Enter a character:");
	scanf("%c",&n);
	while(ch>=n)
	{
		printf("%c\n",ch);
		ch--;
	}
}
