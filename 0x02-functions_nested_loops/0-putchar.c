#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints "_putchar",
 * followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	char p[10] = "_putchar";
	int a = 0;

	if (p[0] != '\0')
	{
		do

		{
			_putchar(p[a]);
			a++;

		} while (p[a] != '\0');

		_putchar('\n');
	}
	return (0);
}
