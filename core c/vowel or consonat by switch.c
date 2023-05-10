//Write a C program to check whether an alphabet is vowel or consonant using switch case

#include<stdio.h>
int main()
{
	char ch;
	
	printf("enter alphabet:\n");
	scanf("%c",&ch);
	
	if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
	{
	   switch(ch)
	   {
		
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':	
		    printf("vowel:\n");
			break;
			
	    default :
		    printf("consonant:\n");
			break;							
	  }
   }
   else
   {
	 printf("invalid op:\n");
   }
	
}
