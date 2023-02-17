#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: always 0
 */

int main(void)
{

	/*sizeof oprator is used to evaluate the size osf a variable*/
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("size of long: %lu byte(s)\n", sizeof(long));
	printf("size of long long: %lu byte(s)\n", sizeof(long long));
	printf("size of float: %lu byte(s)\n", sizeof(float));

	return (0);
}
