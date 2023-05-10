#include<stdio.h>
void main()
{
	int age;
	printf("Enter age:");
	scanf("%d",&age);
	
	if(age<=10)
	{
		printf("No ticket");
	}
	else if(age<=18)
	{
		printf("half ticket");
	}
	else if(age<=59)
	{
	    printf("full ticket");	
	}
	else
	{
		printf("wrong age");
	}
}
