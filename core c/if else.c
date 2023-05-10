#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter two characters:");
	scanf("%c%c",&a,&b);
    
    if(a==b)
    {
    	printf("Given characters are same");
	}
	else
	{
		printf("Given characters are different");
	}
}
