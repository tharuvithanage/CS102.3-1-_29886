#include<stdio.h>
    int main()
    {
	int num,ans;
	printf("enter a number: ");
	scanf("%d",&num);
	
	ans=num%2;
	
	if(ans==0)
	printf("The number is even ",ans);
	else
	printf("The number is odd",ans);
}


