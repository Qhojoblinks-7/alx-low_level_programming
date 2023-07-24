#include <stdio.h>
#include <limits.h>
/**
 * _atoi - a function that convert a string to an integer.
 * Return: an int;
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int digit;

	while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r')
	{
		s++;
	}

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';

		if (result > (INT_MAX - digit) / 10)
		{
			return sign == 1 ? INT_MAX : INT_MIN;
		}

		result = result * 10 + digit;
		s++;
	}
	return (result * sign);
}

/**
 * main - a function that prints the outcome of the function atoi
 * Return: 0
 */

int main(void)
{
	char stringA[] = "123";
	char stringB[] = "-456";
	char stringC[] = "   +789";
	char stringD[] = "abc";

	printf("%d\n", _atoi(stringA));
	printf("%d\n", _atoi(stringB));
	printf("%d\n", _atoi(stringC));
	printf("%d\n", _atoi(stringD));

	return (0);
}
