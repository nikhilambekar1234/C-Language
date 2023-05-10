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
   		if(str[i]==ch && i==0)
   		{
   			count++;
   	    }
   	    if( str[i]==' ')
   	    {
   	    	i++;
   	    	if(str[i]==ch)
   	    	{
   	    		count++;
			}
		}
   	}
	printf("Number of words start with given character in string => %c is = %d times",ch,count);	
}

 
