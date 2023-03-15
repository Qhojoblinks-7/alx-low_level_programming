#include <unistd.h>

/**
 * _putchar - writes a character to the standar output
 * @c: the character to be printed
 * Return: 1
 * on error, -1 is returned and errno is set appropraitly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
