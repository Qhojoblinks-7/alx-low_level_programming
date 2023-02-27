#include <unistd.h>

/**
 * _putchar - write the character c to the stdout
 * @c: the chareacter to print
 *
 * Return : 1 on success.
 */

int _putchar(char c)
{
	write(1, &c, 1);
}
