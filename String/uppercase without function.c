#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i;
	printf("Enter string-");
    scanf("%[^\n]s",str);
	
    for(i=0;str[i]!='\0';i++)
   	{
   		
   		if(str[i]<=122 && str[i]>=97)
   		{
   		   str[i]=str[i]-32;	
		}
		
   	}
	printf("Uppercase = %s",str);
	
}

 
