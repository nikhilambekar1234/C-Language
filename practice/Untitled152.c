#include<stdio.h>
void main()
{
	int num[10],i;
	float avg,percent,sum;
	printf("Enter marks of 10 which is each subject having 100 marks:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
		sum=sum+num[i];
	}
	printf("sum=%f\n",sum);
	percent=(float)(sum/1000)*100;
	printf("percentage=%0f\n",percent);
	avg=(float)sum/10;
   	printf("Avg=%f\n",avg);
	
			   
}
		   	
