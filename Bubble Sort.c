int main()
{
int ar[100], n, i, j, temp; 
printf("Enter number of elements ");
scanf("%d", &n); 

printf("Enter  the  Elements "); 
	
	for(i = 0; i < n; i++)
		scanf("%d", &ar[i]); 


	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
			{
				if(ar[j]>ar[j+1]) 
					{
						temp=ar[j];
						ar[j]=ar[j+1];
						ar[j+1]=temp;
					}
			}
	} 

printf("Sorted Array is  : "); 
	
	for(i = 0; i < n; i++)
	printf("%d\t", ar[i]);

return 0;
}
