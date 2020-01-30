int main()
{
	int f=0,s=1,n,t,i;
	printf("Enter the Number of Terms to Display :");
	scanf("%d",&n);
	printf("\nFibonacci Series is :\t%d\t%d",f,s);
	for(i=3;i<=n;i++)
	{
		t=f+s;
		printf("\t%d",t);
		f=s;
		s=t;
	}
	getch();
}
