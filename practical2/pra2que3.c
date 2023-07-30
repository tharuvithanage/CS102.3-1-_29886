#include <stdio.h>
           int main ()
           {
	int distance,time,avspeed;
	printf("enter the distance");
	scanf("%d",&distance);
	
	printf("enter the time");
	scanf("%d",&time);
	
	avspeed=distance/time;
	printf("average speed is %d",avspeed);
	
	return 0;
       }

