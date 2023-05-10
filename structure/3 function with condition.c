#include<stdio.h>
#include<string.h>
struct data
{
	int roll;
	char name[10];
	int age;
	char address[20];
};
struct data fun(struct data s[])
{
	int i;
	
	for(i=0;i<4;i++)
	{
		if(s[i].age==14)
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
		if(s[i].roll%2==0)
      	{
	       printf("%s\n",s[i].name);
	    }
	}
}
struct data run(struct data s[])
{
	int i,n;
	printf("enter roll\n");
	scanf("%d",&n);
	for(i=0;i<4;i++)
	{
	    if(s[i].roll==n)
      	{
	       printf("%d        %s        %d       %s\n",s[i].roll,s[i].name,s[i].age,s[i].address);
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
		scanf("%d%s%d%s",&s[i].roll,s[i].name,&s[i].age,s[i].address);
	}
	printf("your data=\n");
	printf("roll      name       age        address\n");
	for(i=0;i<4;i++)
	{
		if(s[i].age>=11 && s[i].age<=14)
		{
			printf("%d        %s        %d       %s\n",s[i].roll,s[i].name,s[i].age,s[i].address);
		}
	}
	printf("Age having 14\n");
	fun(s);
	printf("even roll no\n");
	gun(s);
	run(s);
	
}
