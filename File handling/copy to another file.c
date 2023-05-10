#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f1,*f2;
	char ch;
	f1=fopen("data.txt","r");
	f2=fopen("data1.txt","w");
	
	if(f1==NULL || f2==NULL)
	{
		printf("can not open file");
		exit (0);
	}
	while(1)
	{
		ch=fgetc(f1);
		if(ch==EOF)
		   break;
		fputc(ch,f2);   
	}
	fclose(f1);
	fclose(f2);
	return 0;
	
}
