#include<stdio.h>
#include<string.h>
struct student
{
  char name[20];
	
};
int main()
{
	int i;
	struct student s;
	char *ptr=s.name;
	
	printf("enter name\n");
	scanf("%[^\n]s",ptr);

	printf("your data=\n");
	printf("name=%s\n",s.name);	
}
