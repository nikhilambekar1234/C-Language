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
	int i,count=0;
	
	for(i=0;i<3;i++)
	{
		if(((s[i].roll)/2)==0)
      	{
	       printf("%s\n",s[i].name);
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
	printf("Age having 14\n");
		for(i=0;i<3;i++)
	{
		if(s[i].roll/2==0)
      	{
	       printf("%s\n",s[i].name);
    	}
    	
    	
    }
	
	for(i=0;i<4;i++)
	{
		fun(s);
	}	
}
