int main()
{

	int a,b,c,l;
	printf("Enter Three Number : ");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>=b)
		if(a>=c)
			l=a;
	if(b>=c)
		if(b>=c)
			l=b;
	if(c>a)
		if(c>=b)
			l=c;
printf("The Largest Number is %d",l);
	getch();
return 0;
}
