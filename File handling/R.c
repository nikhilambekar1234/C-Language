#include<stdio.h>  
void main( )  
{  
	FILE *fp ;  
	char ch ;  
	fp = fopen("data.txt","r");  
	while ( 1 )  
	{  
	ch = fgetc( fp );  
	if ( ch == EOF )  
	break ;  
	printf("%c",ch) ; 
    }

}  

