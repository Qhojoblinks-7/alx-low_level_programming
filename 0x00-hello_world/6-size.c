#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: always 0
 */

int main(void)
{
	int integertype;
	long longtype;
	float floattype;
	char chartype;
	double doubletype;

	/*sizeof oprator is used to evaluate the size osf a variable*/
	printf("Size of int: %ld bytes\n", sizeof(integertype));
	printf("Size of long: %ld bytes\n", sizeof(longtype));
	printf("size of float:%ld bytes\n", sizeof(floattype));
	printf("size of char: %ld bytes\n" sizeof(chartype));
	printf("size of double: %ld bytes\n" sizeof(doubletype));

	return (0);
}
