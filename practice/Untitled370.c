#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f3;
	char ch;
	int c=0,w=0,l=0;
	f3=fopen("file3.txt","r");
	
	if(f3==NULL)
	{
		printf("file not found");
		exit;
	}
	while(1)
	{
		ch=fgetc(f3);
		if(ch==EOF)
		break;
		c++;
		if(ch==' ' || ch=='.')
		w++;
		if(ch=='.')
		l++;
		
	}
	fclose(f3);
	printf("count of character = %d\ncount of words = %d\ncount of lines = 	%d\n",c,w,l);
	
}
