#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
	int month = 2;
	int day = 29;
	int year = 2000;
	int result;

	result = convert_day(month, day);
	if (result == -1)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}
	else
	{
		printf("Day of the year: %d\n", result);
		print_remaining_days(month, day, year);
	}

	return (0);
}
