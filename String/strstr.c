 //string It represents the full string from where substring will be searched.//
 //match: It represents the substring to be searched in the full string.//
//String strstr() example//?*/
#include<stdio.h>  
#include <string.h>    
int main()
{    
    char str[100]="this is javatpoint with c and java";    
	char *sub;    
	sub=strstr(str,"java");    
    printf("\nSubstring is: %s",sub);    
	 return 0;    
}    

