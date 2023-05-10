 #include<stdio.h>
void main()
{
	int tc,ch;
	printf("enter \n1-maharashtra\n2-india\n:");
	scanf("%d",&tc);
	switch(tc)
	{
		case 1:
			printf("welcome in maharashtra\n");
			printf("enter\n1-nashik\n2-pune\n3-mumbai\n:");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					printf("welcome in nashik");
					break;
				case 2:
					printf("welcome in pune");
					break;
				case 3:
					printf("welcome in mumbai");
					break;	
				default :
	             	printf("not available");		
			}
			break;
		case 2:
			printf("welcome in india\n");
			printf("enter\n1-delhi\n2-jaipur\n3-goa\n:");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					printf("welcome in delhi");
					break;
				case 2:
					printf("welcome in jaipur");
					break;
				case 3:
					printf("welcome in goa");
					break;
				default :
		            printf("not available");			
			}
			break;
		default :
		printf("not available");	
	}
	
}
