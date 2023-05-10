#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	int i,L1,L2;
	printf("Enter string1-");
 //   scanf("%s,%s",str1,str2);
     gets(str1);
     printf("Enter string2-");
     gets(str2);
     L1=strlen(str1);
     L2=strlen(str2);
    
    for(i=0;i<=L2;i++)
   	{
       str1[L1+i]=str2[i];
       
	}
	printf("concatinated=%s",str1);

}
