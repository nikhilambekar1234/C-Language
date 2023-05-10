#include<stdio.h>
#include<string.h>
struct data
{
	int roll;
	char name[10];
	int age;
	char address[20];
};
void main()
{
	int i;
	struct data s[4];
	printf("enter data of 4 student\n");
	for(i=0;i<4;i++)
	{
		scanf("%d%s",&s[i].roll,s[i].name);
	}
	printf("your data=\n");
	printf("even roll\n");
	for(i=0;i<4;i++)
	{
		if(((s[i].roll)/2)==0)
      	{
	       printf("%s\n",s[i].name);
    	}
      	
   }
	
	fun(s);
	
}
