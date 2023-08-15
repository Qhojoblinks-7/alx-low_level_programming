#include <stdio.h>

/**
 * main - a function that prints the name of the
 * function it was compiled from
 * Return: an int
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return(0);
}
