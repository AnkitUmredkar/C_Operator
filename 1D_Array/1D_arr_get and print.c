//1.WAP to get & print 1D array of N elements.

#include<stdio.h>

int main()
{
	int n,i;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("\nEnter the elements of array  \n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\nThe array is : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}
