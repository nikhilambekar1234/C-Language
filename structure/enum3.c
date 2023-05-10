#include<stdio.h>
enum weekday {Sunday=5,Monday,Tuesday, Wednesday,Thursday,Friday,Saturday};
int main()
{
	int i;
	enum weekday w;
	w=Monday;
	printf("the value of w is %d\n",w);
	for(i=Sunday;i<=Saturday;i++)
	{
		printf("%d\n",i);
	}
	
}
