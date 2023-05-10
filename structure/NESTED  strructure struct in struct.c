#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	char name[10];
	float marks;
	
	struct adress
	{
		char place[10];
		int pin;
	}a;
	
};
int main()
{
	struct student s;
	
	printf("enter record of student\n");
	scanf("%d%s%f",&s.id,s.name,&s.marks);
	
	printf("id=%d name=%s marks=%f\n",s.id,s.name, s.marks);
	printf("enter place\n");
	scanf("%s",&s.a.place);
	printf("enter pin\n");
	scanf("%d",&s.a.pin);
	printf("place=%s pin=%d\n",s.a.place,s.a.pin);
	printf("id=%d name=%s marks=%f,place=%s pin=%d\n",s.id,s.name, s.marks,s.a.place,s.a.pin);
	
}
