#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	char name[10];
	float marks;
	
}s1;
int main()
{
	
	
	printf("enter record of student\n");
	scanf("%d%s%f",&s1.id,s1.name,&s1.marks);
	
	printf("id=%d name=%s marks=%f\n",s1.id,s1.name, s1.marks);
}
