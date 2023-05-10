#include<stdio.h>
#include<string.h>
struct student
{
	int roll;
	char name[10];
	float chem;
	float math;
	float phy;
};
void main()
{
	int i;
	float percent,sum;
	struct student s[2];
	
	printf("enter information of 2 student\n");
	
	for(i=0;i<2;i++)
	{
		scanf("%d%s%f%f%f",&s[i].roll,s[i].name,&s[i].chem,&s[i].math,&s[i].phy);
	}
	printf("RollNO\t Name\t\tChem\t\tMath\t\tPhy\t\tPercent\n");
	for(i=0;i<2;i++)
	{
		sum=(float)((s[i].chem)+(s[i].math)+(s[i].phy));
        percent=(float)(sum/300)*100;
	   	printf("%d\t%s\t  %f\t  %f\t  %f\t  %f\n",s[i].roll,s[i].name,s[i].chem,s[i].math,s[i].phy,percent);
   	}
}
