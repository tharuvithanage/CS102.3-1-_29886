#include<stdio.h>
int main()
{
	   int number,total=0,mod;
	   printf("enter  number: ");
	   scanf("%d",&number);
	   
	   while(number>0)
	   {
	   	   mod=number%10;
	   	   total=total+mod;
	   	   number=number/10;
	   }
	   printf("total of mod %d",total);
}

