int main()
{
	int a,b,c,d,e,f,g,x;
	printf("Enter the Values of a , b , c , d , e , f , g : ");
	scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g);
	x=((a-b/c*d+e)*(f+g));
	printf("\n((a-b/c*d+e)*(f+g)) = %d",x);
	return 0;
	getch();
}
