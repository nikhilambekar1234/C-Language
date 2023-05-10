#include<stdio.h>
void main()
{
	int i;
	printf("Enter marks:");
	scanf("%d",&i);
	if(i==100)
	{
		printf("genius");
	}
	else if(i>=80)
	
	{
		printf("Topper");
	}
	else if(i>=60)
	{
		printf("Compitator");
	}
	else if(i>=40)
	{
		printf("Average student");
	}
	else
	{
		printf("Fail");
	}

	
}
