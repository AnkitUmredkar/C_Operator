//WAP to Swap two variables (with using third variable).

#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of b : ");
	scanf("%d",&b); 
	
	printf("\nThe values before swaping : \n");
	
	printf("a : %d\n",a);
	printf("b : %d",b);
	
	c = a;
	a = b;
	b = c;
	
	printf("\n\nThe values after swaping : \n");
	
	printf("a : %d\n",a);
	printf("b : %d",b);
}
