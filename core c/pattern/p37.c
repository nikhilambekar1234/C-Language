 #include<stdio.h>
void main()
{
	int row,col,n,m=1,l=1;
	printf("Enter no:");
	scanf("%d",&n);
    for(row=1;row<=n;row++)
	{
		for(col=1;col<=n;col++)
		{
			if(row%2!=0)
			{
				printf("%d\t",m);
				m++;
			}
			else
			{
				printf("%d\t",2*l);
				l++;
			}
		}	
		printf("\n\n");
	}	
}
