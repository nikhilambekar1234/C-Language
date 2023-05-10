#include<stdio.h>
#include<string.h>
struct information
{
	int roll;
	char name;
	float age;
	char address;
};
void main()
{
	struct information s;
	printf("enter data\n");
	scanf("%d%s%f",&s.roll,s.name,&s.age);
	printf("your data=\n");
	printf("%d   %s   %f    ",s.roll,s.name,s.age);
}
