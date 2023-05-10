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
	struct data s[3];
	
	printf("enter data of student\n");
	for(i=0;i<3;i++)
	{
		scanf("%d%s%f%s",&s[i].roll_no,s[i].name,&s[i].age,s[i].address);
	}
	printf("your data=\n");
	printf("roll no    name     age    address\n");
	for(i=0;i<3;i++)
	{
		printf("%d     %s      %f      %s",s[i].roll_no,s[i].name,s[i].age,s[i].address);
	}
	

	
}
