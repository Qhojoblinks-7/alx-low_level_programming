#include <stdio.h>

/**
 * main - a program that prints all single numbers
 * of base 10 followed by a new line.
 * this is done using the "putchar()" function
 * instead of printf or anyother funtion of the stdout
 * functions.
 * Return: 0
 */

int  main(void)
{
	int Base_ten;

	/* this is where the comparism is done using the for loop */
	for (Base_ten = 0; Base_ten < 10; Base_ten++)
	{
		/**
		 * here by addig 0 as a character instead of just
		 * an integer(which is why its in single quotes),
		 * automatically changes the integers to chars
		 * before outputting them to the console as
		 * integers again.
		 */
		putchar('0' + Base_ten);
	}
	putchar('\n');

	return (0);
}
