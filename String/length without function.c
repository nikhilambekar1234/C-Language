#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i,count=0;
	printf("Enter string-");
	gets(str);
	
    for(i=0;str[i]!='\0';i++)
   	{
		count++;
	}
	printf("The string length of %s is = %d",str,count);
	
}

 
