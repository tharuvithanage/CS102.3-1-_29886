#include <stdio.h>
    int main ()
    {
	float F,C;
	printf("enter Fahrenheit value");
	scanf("%f",&F);
	
	C =( F - 32 )*(5/9);
	printf("Celsius value is %f",C);
	
	return 0;
   }

