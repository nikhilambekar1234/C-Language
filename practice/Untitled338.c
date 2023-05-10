#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20],temp;
	int i,j,length;
	
	printf("Enter string1-");
    scanf("%[^\n]s",str1);
    length=strlen(str1);
    
	
    for(str1[i]=0;str1[i]!='\0';i++)
   	{
       if(str1[i]==' ')
       {
       	   str2[j]='\0';
	   }
	   else
	   {
	   	   str2[j]=str1[i];
	   	   j++;
	   }
	      
   	}
   	
   	printf("%s",str2);
   	
   
	
	
}

 
