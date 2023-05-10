#include<stdio.h>
void assending()
{
	int a,b,c,i,temp=0;
   
   printf("enter three num:");
   scanf("%d%d%d",&a,&b,&c);
   
   for(i=1;i<=10;i++)
   {
    if(a>b)
    {
    	temp=a;
    	a=b;
    	b=temp;
	}
	else if(b>c)
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
	assending();
}
