#include<stdio.h>
#include<string.h>
struct student
{
	char name[10],address[20];
	int roll,age;
	
	
};
fun(struct student s[4])
{
	int i;
	printf("age having 14\n");
	for(i=0;i<4;i++)
	{
		if(s[i].age==14)
    	{
		    printf("%s\n",s[i].name);
	    }
	}
}
gun(struct student s[4])
{
	int i;
	printf("even roll no\n");
	for(i=0;i<4;i++)
	{
		if(s[i].roll%2==0)
    	{
		    printf("%s\n",s[i].name);
	    }
	}
}
run(struct student s[4])
{
	int i,n;
	printf("enter roll no\n");
	scanf("%d",&n);
	for(i=0;i<4;i++)
	{
		if(s[i].roll==n)
    	{
		    printf("%d     %s   %d     %s\n",s[i].roll,s[i].name,s[i].age,s[i].address);
	    }
	}
}

void main()
{
	int i;
	struct student s[4];
	
	for(i=0;i<4;i++)
	{
		scanf("%d%s%d%s",&s[i].roll,s[i].name,&s[i].age,s[i].address);
	} 
	printf("your data=\n");
	for(i=0;i<4;i++)
	{
		if(s[i].age>11 && s[i].age<14)
		{
			printf("%d     %s   %d     %s\n",s[i].roll,s[i].name,s[i].age,s[i].address);
		}
	} 
	fun(s);
	gun(s);
	run(s);
}
