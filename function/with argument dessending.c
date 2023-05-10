#include<stdio.h>
void dessending(int a,int b,int c)
{
   int i,temp=0;
   
   for(i=1;i<=10;i++)
   {
    if(a<b)
    {
    	temp=a;
    	a=b;
    	b=temp;
	}
	else if(b<c)
	{
		temp=b;
		b=c;
		c=temp;
	}
   }
   printf("%d\n%d\n%d",a,b,c);    	   
}
void main()
{
   int a,b,c;
   printf("enter three num:");
   scanf("%d%d%d",&a,&b,&c);
   dessending(a,b,c);
}

