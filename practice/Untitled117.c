#include<stdio.h>
void main()
{
	int a,b,n;
	float div;
	
	kdn :
		printf("enter two num:");
		scanf("%d%d",&a,&b);
		printf("enter\n1-add\n2=sub\n3-mult\n4-div\n5-mode\n:-");
		scanf("%d",&n);
		
		{
			if(n==1)
			{
				printf("add=%d\n",a+b);
			}
			else if(n==2)
			{
				printf("sub=%d\n",a-b);
			}
			else if(n==3)
			{
				printf("mult=%d\n",a*b);
			}
			else if(n==4)
			{
				div=(float)a/b;
				printf("div=%f\n",div);
			}
			else if(n==5)
			{
				printf("mode=%d\n",a%b);
			}
			else
			{
				printf("invalid op");
			}
			goto kdn;
			
		}
		
}
