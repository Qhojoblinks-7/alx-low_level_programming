#include <stdio.h>

/**
 * main - a program that prints alphabets in lowercase
 * flowwed by a new line. The only function used here
 * is the 'putchar()' function and it was used twice.
 * the 'putchar'()' function is one of the functions
 * found in the 'stdio.h' header files and its function
 * is to just a single character.
 * Return: an intetger
 */

int main(void)
{
	char alpha;

	/* over here I'm using the for loop. and in the */
	 /* for loop instead of doing the init outside*/
	 /* the condition statement you do it inside the*/
	 /* for loop*/

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
/* the for loop reads like this " if alpha is assigne to*/
 /* 'a' and it's less that or equal to 'z', then print*/
 /* alpha + 1."*/
 /* now dont forget all characters are put in single*/
 /* quotes - very important.*/
 /* also when you put the new line statement in the*/
 /* for loop each character will be outputed on a different*/
 /* line but if yopu put it outside the loop, it will be*/
 /* printed on a single line.*/
