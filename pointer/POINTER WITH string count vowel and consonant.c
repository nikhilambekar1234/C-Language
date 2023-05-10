#include<stdio.h>
#include<string.h>
int main()
{
	char str[20]="kdninfotech";
	int i,v=0,c=0;
	char *ptr=str;
	
    for(i=0;*(ptr+i)!='\0';i++)
   	{
   		if(*(ptr+i)>=97 && *(ptr+i)<=122)
   		{
   			if(*(ptr+i)=='a'||*(ptr+i)=='e'||*(ptr+i)=='i'||*(ptr+i)=='o'||*(ptr+i)=='u')
   			{
   			    v++;	
			}
			else
	    	{
		    	c++;
	     	}
   		}
	}
   	printf("vowel=%d\n",v);	
   	printf("consonant=%d\n",c);	
}

 
