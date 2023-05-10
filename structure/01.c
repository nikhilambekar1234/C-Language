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
	struct student s1,s2;
	s1.id=1;
	
	strcpy(s1.name,"KDN");
	s1.marks=99.99;
	
	printf("id=%d name=%s marks=%f\n",s1.id,s1.name, s1.marks);
}
