#include<stdio.h>
    int main()
    {
	int option;
	float radius;
	
	printf("1 Circumference\n");
	printf("2 Area\n");
	printf("3 Volum of a sphere\n");

	
	printf("\nEnter the option that you need: ");
	scanf("%d",&option);
	
	printf("enter radius: ");
	scanf("%f",&radius);
	

	switch(option){
		
	
	case 1:printf("Circumference= %f",2*3.14*radius);break;
	case 2:printf("Area= %f",3.14*radius*radius);break;
	case 3:printf("Volume of a sphere= %f ",4/3*3.14*radius*radius*radius);break;
               default:printf("Enter a valid option: ");
	
	
	}
}

