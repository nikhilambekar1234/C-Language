#include<stdio.h>
#include<string.h>
{
	char str[]="KDNinfotech";
	char *ptr=str;
	for(i=0;str[i]!='\0';i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("\narr\n");
	for(i=0;str[i]!='\0';i++)
	{
		printf("%d\t",*(ptr+i));
	}
}