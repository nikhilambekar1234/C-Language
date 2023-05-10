#include<stdio.h>
enum weekday {Sunday=1,Monday,Tuesday, Wednesday,Thursday,Friday,Saturday};
int main()
{
	enum weekday w;
	w=Monday;
	printf("the value of w is %d",w);
	return 0;
	
}
