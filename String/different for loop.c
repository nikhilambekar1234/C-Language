#include<stdio.h>
#include<string.h>
int main()
{
	char s[]="kdninfotech";
	int i,count=0;
	
//	for(i=0;i<11;i++)
//    for(i=0;i<strlen(s);i++)
   for(i=0;s[i]!='\0';i++)
  //   for(i=0;s[i]!=NULL;i++)
	{
		printf("%c",s[i]);
		if(s[i]=='n')
		count++;
	}
	printf("the count of n in string is %d times",count);
	
}

 
