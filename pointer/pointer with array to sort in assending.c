#include<stdio.h>
void main()
{
	int a[10],i,j,temp=0;
	int *ptr=a;
	printf("enter element\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("arr\n");
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(*(ptr+i)>*(ptr+j))
			{
				temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
		printf("%d\n",*(ptr+i);
	}
}
