#include<stdio.h>
     int main()
    {
	int month;
	printf("Enter a month: ");
	scanf("%d",&month );


	

	switch(month)
	{
		
	
	case 1:printf("January has 31 days ",month);break;
	case 2:printf("February has 28 days",month);break;
	case 3:printf("March has 31 days ",month);break;
	case 4:printf("April has 30 days ",month);break;
	case 5:printf("May has 31 days ",month);break;	
	case 6:printf("June has 30 days ",month);break;
	case 7:printf("July has 31 days ",month);break;
	case 8:printf("August has 31 days ",month);break;
	case 9:printf("September has 30 days ",month);break;
	case 10:printf("October has 31 days ",month);break;
	case 11:printf("November has 30 days ",month);break;			
	case 12:printf("December has 31 days ",month);break;	
            default:printf("Input valid number");
	
	
	}
    }



