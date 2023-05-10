#include<stdio.h>
void main()
{
	int yr;
	printf("Enter a year");
	scanf("%d",&yr);
	if(yr%400==0 || yr%4==0 && yr%100!=0)
	{
		printf("Leap year=%d",yr);
	}
	else
	{
		Printf("Not leap year=%d",yr);
	}
}
