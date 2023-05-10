#include<stdio.h>
#include<string.h>
union student
{
	int id;
	char name[10];
	float marks;
	
};
int main()
{
	union student s1,s2;
	
	printf("enter record of student\n");
	scanf("%d%s%f",&s1.id,s1.name,&s1.marks);
	
	printf("id=%d name=%s marks=%f\n",s1.id,s1.name, s1.marks);
}
