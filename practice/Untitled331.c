#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i,count=0;
	printf("Enter string-");
    scanf("%[^\n]s",str);
	
    for(i=0;str[i]!='\0';i++)
   	{
   		
   		if(str[i]<=90 && str[i]>=65)
   		{
   		   str[i]=str[i]+32;	
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			str[i]=str[i]-32;
		}
		else
		{
		    printf(" ");
     	}
    }
   	printf("Swapping case = %s",str);	
}

 
