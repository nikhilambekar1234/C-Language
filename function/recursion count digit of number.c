 #include<stdio.h>
int count(int n)
{
	int rem;
	static int c=0;
	if(n==0) 
	return c;
	rem=n%10;
	c++;
	return count(n/10);
	
}
void main()
{
	int n,res;
	printf("enter num");
	scanf("%d",&n);
	res=count(n);
	
	printf("%d\n",res);
	
}
