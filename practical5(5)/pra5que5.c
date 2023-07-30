#include<stdio.h>
int main()
{
	   int number,total=0,mod;
	   printf("enter  number: ");
	   scanf("%d",&number);
	   
	   do
	   {
	   	   mod=number%10;
	   	   printf("%d",mod);
	   	   number=number/10;
	   }
	   while(number>0);
	   
	   
}


