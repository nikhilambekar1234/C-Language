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
		count=0;
		if(s[i].age==14)
      	{
	    	count++;
	    
    	}
    	if(count==1)
    	{
    		printf("%s\n",s[i].name);
		}
		else
		{
			
		}
    	
    }
    

}
void main()
{
	int i;
	struct data s[3];
	printf("enter data of 3 student\n");
	for(i=0;i<3;i++)
	{
		scanf("%d%s%d%s",&s[i].roll,s[i].name,&s[i].age,s[i].address);
	}
	printf("your data=\n");
	printf("Age having 14\n");
	
	for(i=0;i<3;i++)
	{
		fun(s);
	}	
}
