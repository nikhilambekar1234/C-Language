#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f1,*f2,*f3;
	char ch;
	f1=fopen("record1.txt","r");
	f2=fopen("record2.txt","r");
	f3=fopen("record3.txt","w");
	
	if(f1==NULL || f2==NULL || f3==NULL)
	{
		printf("can not open file");
		exit (1);
	}
	while(1)
	{
		ch=fgetc(f1);
		if(ch==EOF)
		   break;
		fputc(ch,f3);   
	}
	fclose(f1);
	while(2)
	{
		ch=fgetc(f2);
		if(ch==EOF)
		   break;
		fputc(ch,f3);   
	}
	fclose(f2);
	fclose(f3);
	return 0;
	
}
