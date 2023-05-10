#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],temp;
	int i,length;
	
	printf("Enter string1-");
    scanf("%[^\n]s",str1);
    length=strlen(str1);
    
	
    for(i=0;i<(length/2);i++)
   	{
       temp=str1[i];
       str1[i]=str1[length-1-i];
       str1[length-1-i]=temp;
	      
   	}
   	printf("%d\n",length);
   	printf("%s",str1);
   	
   
	
	
}

 
