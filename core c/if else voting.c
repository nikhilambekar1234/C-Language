#include<stdio.h>
void main()
{
	int age;
	printf("Enter an age of person:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("A person is eligible for vote");
	}
	else
	{
	    printf("A person is not eligible for vote");	
	}
	
}
