#include<stdio.h>
#include<string.h>
int main()
{
	int i,c=0;
	char str[20]="KDNinfotech";
	char *ptr=str;
	
	for(i=0;*(ptr+i)!='\0';i++)
   	{
   	   c++;
	}
	printf("length=%d\n",c);
}
