#include <stdio.h>

void LeapYear(int year)
{
	if (( year % 4 == 0 && year % 100 != 0)|| (year % 400 == 0))
	{
		printf("\n%d is a Leap Year...",year);
	}
	else 
	{
		printf("\n%d is not a Leap Year...\n",year);
	}
}


int main()
{
	int year;
	
	printf("Enter a Year : \n");
	scanf("%d", &year);
	
	LeapYear(year);
}