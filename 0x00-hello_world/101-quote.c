#include <stdio.h>

/**
 * main - the main functionn that prints a string
 * to stadard error using fprintf() as an
 * output function.
 * the output function used here prints
 * a string to a file,
 * of which stderr and stdout are consised.
 * Return: it returns 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\"- Dora Korpar,2015-10-19 \n",59);
	return (1);
}
