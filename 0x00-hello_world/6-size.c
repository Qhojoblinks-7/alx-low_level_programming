#include <stdio.h>

/**
 * main - prints the sizes of various types
 *
 * Return: always 0, non-zero otherwise
 */

int main(void)
{

	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %li byte(s)\n", sizeof(int));
	printf("size of a long int: %ld byte(s)\n", sizeof(long));
	printf("size of a long long int: %ld byte(s)\n", sizeof(long long));
	printf("size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
