#include<stdio.h>
#include<string.h>
struct student
{
	int roll;
	int age;
	char name[10];
	float marks;
};
void main()
{
	int i;
	struct student s[3];
	
	printf("enter information of 3 student\n");
	for(i=0;i<3;i++)
	{
		scanf("%d%d%s%f",&s[i].roll,&s[i].age,s[i].name,&s[i].marks);
	}
	printf("your data=\n");
	printf("RollNO\tAge\tName\tMarks\n");
	for(i=0;i<3;i++)
	{
		if(s[i].roll==2)
		{
			printf("%d\t%d\t%s\t%f\n",s[i].roll,s[i].age,s[i].name,s[i].marks);
		}
		
	}
}
