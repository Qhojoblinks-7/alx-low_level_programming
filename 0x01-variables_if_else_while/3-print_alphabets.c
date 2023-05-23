#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase
 * and uppercase followed by a new line.
 * Here this program is written using the do...while
 * loop.
 * Return: 0.
 */

int main(void)
{
	char alpha_lower, alpha_caps;

	/* variable declearation */
	alpha_caps = 'A';
	alpha_lower = 'a';

	/* here the first do...while loop is read like "print*/
	 /* the letter in the container lablled alpha_lower*/
	 /* and increase it by one(alpha_lower +1), as long as*/
	 /* (while (alpha_lower <= 'z');) 'a' is less than 'z'".*/

	do

	{
		putchar(alpha_lower);
		alpha_lower++;
	} while (alpha_lower <= 'z');

	/* and then go ahead and do same here */
	do

	{
		putchar(alpha_caps);
		alpha_caps++;
	} while (alpha_caps <= 'Z');

	/* when than print a newline '\n'*/
	{
		putchar('\n');
	}

	return (0);

}
