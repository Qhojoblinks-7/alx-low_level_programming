#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - a function that prints tha
 * last digit of a number
 *
 *  @num: number to be checked
 *  Return: last_digit
 */

int print_last_digit(int num)
{
	int last_digit;

	int abs(int);

	/* this operation calcs for the last digit */
	/* of the number which is the remainder */
	last_digit = (int abs(num) % 10);

	/* the '0' character is added to the args of */
	/* the _putchar function so the result can be */
	/* printed in integers */
	_putchar(last_digit + '0');

	return (last_digit);
}
