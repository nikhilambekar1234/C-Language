#include<stdio.h>
int main()
{
	int a,b,i,gcd,lcm;
	printf("enter two num\n");
	scanf("%d%d",&a,&b);
	
//	for(i=1;i<=a,i<=b;i++)
	//for(i=1;i<=a/2;i++)
	for(i=1;i<=a;i++)
	{
		if(a%i==0 && b%i==0)
		{
			gcd=i;
		}
	
	}
	lcm=(a*b)/gcd;
	printf("gcd = %d\n",gcd);
	printf("lcm = %d",lcm);
}
