 #include<stdio.h>
#include<string.h>
int main()
{
	char str[20],ch;
	int i,j,count=0; 
	printf("Enter string-");
	gets(str);
	
	
    for(i=0;str[i]!='\0';i++)
   	{
   		if(str[i]<=122 && str[i]>=97 && i==0)
   		{
   		   	str[i]=str[i]-32;
   	    }
   	    else
   	    {
   	    	if(str[i]<=90 && str[i]>=65 && i!=0)
   	    	{
			   str[i]=str[i]+32;
			}
   	   	}
   	   	if( str[i]==' ')
   	   	{
   	   		i++;
   	   		j=i;
   	   		if(str[i]<=122 && str[i]>=97 && j==i)
   	     	{
   		     	str[i]=str[i]-32;
   	        }
   	        else
   	        {
   	    	    if(str[i]<=90 && str[i]>=65 && j!=i)
   	    	   {
			       str[i]=str[i]+32;
		    	}
   	     	}
   	   	}
   	   	
   	}
	printf(" %s",str);	
}

 
