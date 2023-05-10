 #include<stdio.h>
int main()
{
	int num[10],i,max=0,min;
	printf("Enter num:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
		max=num[0];
		if(num[i]>max)
		{
		   max=num[i];	  
		}
	}
	printf("max=%d\n",max);		   
}
		   	
