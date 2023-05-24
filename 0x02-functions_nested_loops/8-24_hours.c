#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - a function that prints every minute of
 * the day of jack_bauer from 00:00 to 23:59.
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			/* here the phrase of code tense of the first number */
			/* of the houre section */
			/* it divides the hour by 10 and takes the number */
			/* befor the decimal point as tense */
			/* Example 14/10 == 1.4 and since int type dont make */
			/* of numbers after the decimal point the ans is 1 */

			_putchar('0' + (hour / 10));

			/* this one also uses % to calc for the remainder. */
			/* like this hour % 10 and the remainder is used as */
			/* as the ones digit */

			_putchar('0' + (hour % 10));

			/* this seperates the hours from the minutes */

			_putchar(':');

			_putchar('0' + (minute / 10));

			_putchar('0' + (minute % 10));

			_putchar('\n');
		}
	}
}
