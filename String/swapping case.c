#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i,L;
	printf("Enter string-");
    scanf("%[^\n]s",str);
    L=strlen(str);
	
    for(i=0;i<=L;i++)
   	{
   		
   		if(str[i]<=90 && str[i]>=65)
   		{
   		   str[i]=str[i]+32;	
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			str[i]=str[i]-32;
		}
		
    }
   	printf("Swapping case = %s",str);	
}

 
