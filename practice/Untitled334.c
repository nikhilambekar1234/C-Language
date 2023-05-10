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
   			if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
   			{
			 str[i]=str[i]+32;
		  }
   		   	
		}
	
		else
		{
		    printf(" ");
     	}
    }
   	printf("Swapping case = %s",str);	
}

 
