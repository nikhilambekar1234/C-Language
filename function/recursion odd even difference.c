#include<stdio.h>
int sum(int i,int n)
{
	if(i>n)
	return 0;
	return i+sum(i+2,n);	
}
void main()
{
	int i=1 ,n,odd,even;
	printf("enter num");
	scanf("%d",&n);
	odd=sum(i,n);
	printf("sum of odd num=%d=odd\n",odd);
	
	
	even=sum(i+1,n);
	printf("sum of even num=%d=even\n",even);
	
	printf("difference=%d",even-odd);	
}
