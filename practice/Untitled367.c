#include<stdio.h>

void main()
{
	FILE *fp ;  
	char buff[255] ;  
	fp = fopen("myfilecreatedbyme.txt","w") ;
	fprintf(fp,"hello file by fprintf created by me\n");
	
	
	
	fp=fopen("myfilecreatedbyme.txt","r") ; 
	while(fscanf(fp,"%s",buff)!=EOF) ;
	{
		printf("%s",buff);
	}
	fclose(fp);
	

}
