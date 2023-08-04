#include <stdio.h>

/**
 * multiply - Function to multiply two numbers
 * @num1: First number
 * @num2: Second number
 *
 * Return: The product of num1 and num2
 */

int multiply(int num1, int num2)
{
	return (num1 * num2);
}

int main(nt argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int product = multiply(num1, num2);

	printf("%d\n", product);

	return (0);
}	
