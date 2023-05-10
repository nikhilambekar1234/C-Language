#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	int i;
	printf("Enter string1-");
 //   scanf("%s,%s",str1,str2);
     gets(str1) ;
     printf("Enter string2-");
     gets(str2);
    
    for(i=0;str2[i]!='\0';i--)
   	{
       if(str1[i]==str2[i])
	   {
	   	 printf(" both are same string");
	   }
	   else
	   {
	   	 printf(" both are not same string");
	   }
	      
   	}
   	
   
	
	
}

 
