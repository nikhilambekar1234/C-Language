#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i,count=0;
	printf("enter string-");//eg-kdn info tech
	scanf("%[^\n]s",str);
	

    for(i=0;i<strlen(str);i++)
	{
		printf("%c\n",str[i]);
		if(str[i]=='n')
		count++;
	}
	printf("the count of n in string is %d times",count);
	
}

 
