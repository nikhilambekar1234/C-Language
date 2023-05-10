#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],ch;
	int i,count=0;
	printf("Enter string-");
	gets(str);
	printf("enter character-");
	scanf("%c",&ch);
	
    for(i=0;str[i]!='\0';i++)
   	{
   		if(str[i]==ch)
   		{
   			count++;
	    }
		
	}
	printf("Number of character in string => %c is = %d times",ch,count);
	
}

 
