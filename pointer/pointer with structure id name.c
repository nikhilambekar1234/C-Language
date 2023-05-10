#include<stdio.h>
#include<string.h>
struct student
{
  int id;
  char name[20];
	
};
int main()
{
	int i;
	struct student s;
	char *ptr=s.name;
	int *ptr1=&s.id;
	
	printf("enter id,name\n");
	scanf("%d%s",ptr1,ptr);

	printf("your data=\n");
	printf("id=%d\nname=%s\n",s.id,s.name);	
}
