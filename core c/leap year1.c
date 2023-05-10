#include<stdio.h>
void main()
{
	int yr;
	printf("Enter a year:");
	scanf("%d",&yr);
	
	if(yr%4==0 || yr%400==0 && yr%100!=0)
	{
		printf("Given year is leap ");
	}
	else
	{
		printf("Given year is not leap");
	}
}
