#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f1;
	char ch;
	int c=0,w=0,l=0;
	f1=fopen("data.txt","r");
	if(f1==NULL)
	{
		printf("file not found");
		exit (1);
	}
	while(1)
	{
		ch=fgetc(f1);
		if(ch==EOF)
		   break;
	    c++;
	    if(ch==' ' || ch=='.')
	    w++;
	    if(ch=='.')
	    l++;
	}
	fclose(f1);
	printf("Counts of character = %d\nCounts of words = %d\nCounts of line = %d\n",c,w,l);
	return 0;
	
}
