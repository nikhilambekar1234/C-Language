#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="nikhil";
	int i;

	
    for(i=0;str[i]!='\0';i++)
   	{
   		
   		if(str[i]<=122 && str[i]>=97)
   		{
   		   str[i]=str[i]-32;	
		}
		else
		{
			printf(" ");
		}
   	}
	printf("Uppercase = %s",str);
	
}

 
