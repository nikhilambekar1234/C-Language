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
		  	printf("%d ",no);
		  	no++;
	    }
	    no--;
		printf("\n");
	}

}
