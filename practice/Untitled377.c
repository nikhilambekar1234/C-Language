#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i;
	printf("eneter string-");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=97 && str[i]<=122)
		{
			if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
			{
				str[i]=str[i]-32;
			}
		}
		else if(str[i]>=65 && str[i]<=90)
		{
			if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='O')
			{
				
			}
			else
			{
				str[i]=str[i]+32;
			}
			
			
		}
	}
	printf("%s",str);
}