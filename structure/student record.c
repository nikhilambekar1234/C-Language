#include<stdio.h>
#include<string.h>
struct student
{
	int roll;
	char name[10];
	float chem;
	float math;
	float phy;
	float percent;
};
void main()
{
	int i;
	float percent,sum;
	struct student s[1];
	
	printf("enter information of 1 student\n");
	for(i=0;i<1;i++)
	{
		scanf("%d%s%f%f%f",&s[i].roll,s[i].name,&s[i].chem,&s[i].math,&s[i].phy);
	}
	sum=(float)(s[i].chem+s[i].math+s[i].phy);
	printf("%f\n",sum);
	percent=(float)(sum/300)*100;
	printf("%f\n",percent);
	printf("your data=\n");
	printf("RollNO\tName\tchem\tmath\tphy\tpercent\t\n");
	for(i=0;i<1;i++)
	{
		
		printf("%d\t%s\t%f\t%f\t%f\t%f\n",s[i].roll,s[i].name,s[i].chem,s[i].math,s[i].phy,percent);
		
	}
}
