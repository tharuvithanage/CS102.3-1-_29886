#include<stdio.h>
int main()
{
	int n1,n2,option;
	
	
	
	
	printf("1 Addition\n");
	printf("2 Substraction\n");
	printf("3 Multiplication\n");
	printf("4 Division\n");
	
	printf("\nEnter the option that you need: ");
	scanf("%d",&option);
	
	printf("enter n1: ");
	scanf("%d",&n1);
	
	printf("enter n2: ");
	scanf("%d",&n2);
	
	
	
	switch(option){
		
	
	case 1:printf("add=%d ",n1+n2);break;
	case 2:printf("sub=%d ",n1-n2);break;
	case 3:printf("Multi=%d ",n1*n2);break;
	case 4:printf("Div=%d ",n1/n2);break;
	
	
	}
}

