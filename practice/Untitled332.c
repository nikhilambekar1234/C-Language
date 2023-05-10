#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	int i,L1,L2;
	printf("Enter string1-");
     gets(str1);
     L1=strlen(str1);
    
    for(i=0;i<=L1;i++)
   	{
       str2[i]=str1[i];
       
	}
	printf("copy string2 = %s",str2);

}
