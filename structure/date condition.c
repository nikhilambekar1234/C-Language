#include<stdio.h>
#include<string.h>
struct date
{
	int day,month,year;

};

void main()
{
	int i;
	struct date s1,s2;
	printf("enter first date\n");
	scanf("%d%d%d",&s1.day,&s1.month,&s1.year);
	printf("enter second date\n");
	scanf("%d%d%d",&s2.day,&s2.month,&s2.year);
	printf("your data=\n");
	printf("day       month        year\n");
	printf("%d        %d       %d\n",s1.day,s1.month,s1.year);
	printf("%d        %d       %d\n",s2.day,s2.month,s2.year);
	
	if(s1.day==s2.day && s1.month==s2.month && s1.year==s2.year)
   	{
	   	printf("same date");
   	}
    else
    {
	   	printf("not same date");
    }	
}
