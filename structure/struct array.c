#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	char name[10];
	float marks;
	
};
int main()
{
	int i;
	struct student s[5];
	
	printf("enter record of 5 student\n");
	for(i=0;i<5;i++)
	{
		scanf("%d%s%f",&s[i].id,s[i].name,&s[i].marks);
	}
	printf("your data=\n");
	for(i=0;i<5;i++)
	{
		printf("id=%d name=%s marks=%f\n",s[i].id,s[i].name, s[i].marks);
	}
	
	
}
