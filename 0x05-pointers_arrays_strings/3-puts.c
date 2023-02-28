#include "main.h"

/**
 * _puts - a function that prints a string,
 * fpollowed by a new line to  stdout
 * there are two way.
 * you can choose to init i,
 * followed by a for loop that contains the array ( str[] )
 * followed by the _pust function and then u retiurn 0
 *
 * alternatively, since the put() function a new
 * line and the parameters have already been given
 * @str: sring to eveluate
 * Return: Always 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
