#include<stdio.h>
#include<string.h>
struct data
{
	char name[10];
	int ac;
	float balance;
};
struct data fun(struct data s[])
{
	int i;
	
	for(i=0;i<4;i++)
	{
		if(s[i].balance<200)
      	{
	       printf("%s\n",s[i].name);
	    }
	}
}
struct data gun(struct data s[])
{
	int i;
	
	for(i=0;i<4;i++)
	{
		if(s[i].balance>1000)
      	{
      		s[i].balance+=100;
	        printf("%s     %f\n",s[i].name,s[i].balance);
	    }
	}
}
void main()
{
	int i;
	struct data s[4];
	printf("enter data of 4 student\n");
	for(i=0;i<4;i++)
	{
		scanf("%s%d%f",s[i].name,&s[i].ac,&s[i].balance);
	}
	printf("your data=\n");
	printf("name       ac        balance\n");
	for(i=0;i<4;i++)
	{
		printf("%s        %d       %f\n",s[i].name,s[i].ac,s[i].balance);
	}
	printf("balance less than 200\n");
	fun(s);
	printf("if balance more than 1000\n");
	gun(s);
}
