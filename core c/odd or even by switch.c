//1.	Write a C program to check whether a number is even or odd using switch case.

#include<stdio.h>
int main()
{
	int a;
	
	printf("enter  num :\n");
	scanf("%d",&a);
	
		switch(a%2==0)
	    {
		    case 1:
			printf("even");
			break;
			
		    case 0:
		    printf("odd");
			break;							
    	}
}
