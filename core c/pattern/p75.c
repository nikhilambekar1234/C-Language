 #include<stdio.h>
void main()
{
	int row,star,n,space,no=2;
	printf("enter no");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		no=2;
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
