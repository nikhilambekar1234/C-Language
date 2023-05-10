#include<stdio.h>
#include<string.h>
struct data
{
	int roll_no;
	char name[10];
	float age;
	char address;
	
	
};
void main()
{
	int i;
	struct data s;
	
	printf("enter data of student\n");

	
		scanf("%d%s%f%s",&s.roll_no,s.name,&s.age,s.address);
	
	printf("your data=\n");
	printf("roll no    name     age    address\n");
	
	{
		printf("%d     %s      %f      %s",s.roll_no,s.name,s.age,s.address);
	}
	

	
}
