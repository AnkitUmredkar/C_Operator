//pithagoras rule

#include<stdio.h>

int main()
{
	int ab,bc,ac;
	
	printf("Enter the value of bc : ");
	scanf("%d",&bc);
	
	printf("Enter the value of ac : ");
	scanf("%d",&ac);
	
	ab = sqrt((bc * bc) + (ac * ac));
	
	printf("The third side of angle is : %d",ab);
	
	return 0;
}
