#include<stdio.h>
void main()
{
	int yr;
	printf("Enter a year:");
	scanf("%d",&yr);
	if(yr%400==0|| yr%4==0 && yr%100!=0)
	{
		printf("leap yr=%d",yr);
	}
	else
	{
		Printf("not leap year=%d",yr);
	}
}
