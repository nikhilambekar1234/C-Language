 #include<stdio.h>
void main()
{
	int row,star,n,space,no=1;
	printf("enter no");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(space=1;space<=(n-row);space++)
		{
			printf(" ");
		}
		for(star=1;star<=row;star++)
	    {
	    	if(no%2==0)
	    	{
	    		printf("0 ");
			}
			else
			{
				printf("1 ");
			}
			no++;
	   }
	    printf("\n");
	}
}
