#include<stdio.h>
void main()
{
	int i=0,j=1,k,n=3,x;
	
	printf("enter no:");
	scanf("%d",&x);
     printf("%d\n",i);
    printf("%d\n",j);
    
	kdn :
    k=j+i;
    printf("%d\n",k);
	i=j;
	j=k;
	n++;
	if(n<=x)
        {
				goto kdn;
		}
		else
		{
			printf("Thank You");
		}	
}
