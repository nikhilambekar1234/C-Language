#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i,count=0,cap,small,symbol,space,num;
	printf("Enter string-");
    scanf("%[^\n]s",str);
	
    for(i=0;str[i]!='\0';i++)
   	{
   		
   		if(str[i]<=90 && str[i]>=65)
   		{
   		   cap++;
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			small++;
		}
		else if(str[i]>=48 && str[i]<=57)
		{
		    num++;
     	}
     	else if(str[i]>=0 && str[i]<=47 && str[i]!=32||str[i]>=58 && str[i]<=64||str[i]>=91 && str[i]<=96||str[i]>=123 && str[i]<=127)
     	{
     		symbol++;
		}
		else if(str[i]==32)
		{
			space++;
		}
    }
   	printf("cap=%d\n",cap);	
   	printf("small=%d\n",small);	
   	printf("num=%d\n",num);	
    printf("symbol=%d\n",symbol);	
   	printf("space=%d\n",space);	
}

 
