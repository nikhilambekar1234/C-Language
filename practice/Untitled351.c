#include<stdio.h>
#include<string.h>
struct distance
{
	int feet;
	int inch;
	
};
void main()
{
	struct distance d1,d2,sum;
	
	printf("enter first distance\n");
	scanf("%d%d",&d1.feet,&d1.inch);
	printf("enter second distance\n");
	scanf("%d%d",&d2.feet,&d2.inch);
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	if(sum.inch>=12)
	{
		sum.feet++;
		sum.inch-=12;
	}
	printf("your distance is =\n feet=%d,inch=%d",sum.feet,sum.inch);
	
	
}
