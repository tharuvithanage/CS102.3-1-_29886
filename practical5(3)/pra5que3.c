#include<stdio.h>
int main()
{
	int num,fact=1,x;
	printf("enter number: ");
	scanf("%d",&num);
	
	while(x<=num)
	{
		fact=fact*x;
		x++;
	}
	printf("Factorial is %d",fact);
	
}

