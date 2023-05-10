 #include<stdio.h>
#include<string.h>
int main()
{
	char str[20],ch;
	int i,j,count=0; 
	printf("enter-");

	gets(str);
	
	
   	{
   		if(str[i]>=97 && str[i]<=122)
   		{
   			if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
   			{
   				str[i]=str[i]-32;	
		    }
		    
   		   
   	    }
   	    else if(str[i]<=90 && str[i]>=65)
   	    	{
   	    	    if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
   	    	    {
   	    	    	
			    }
			    else
			    {
			    	str[i]=str[i]+32;
				}
			   
			}
   	   	
   	   
   	   	
   	}
	printf(" %s",str);	
}

 
