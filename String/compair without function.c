#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	int i,count=0;
	printf("Enter string1-");
 //   scanf("%s,%s",str1,str2);
     gets(str1);
     printf("Enter string2-");
     gets(str2);
    
    for(i=0;str2[i]!='\0'||str1[i]!='\0';i++)
   	{
       if(str1[i]!=str2[i])
	   {
	     count++;
	     break;
	   }
	}
	if(count==1)
	{
		printf("not equal string");
	}
	else
	{
		printf("equal string");
	}
}

 
