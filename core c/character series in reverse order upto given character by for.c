#include<stdio.h>
void main()
{
    char ch='Z',n;
    printf("enter character:");
    scanf("%c",&n);
    for(ch='Z';ch>=n;ch--)
    {
    	printf("%c\n",ch);
	}
    
}
