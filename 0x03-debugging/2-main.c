#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*
* @a: num1
* @b: num2
* @c: num#
*/

int largest_number(int a, int b, int c)i;

int main(void)
{
	int a, b, c;
	int largest;

	a = 972;
	b = -98;
	c = 0;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (largest);
}
