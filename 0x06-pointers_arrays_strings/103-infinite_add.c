#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result or 0 if the result cannot be stored in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);


	if (len1 + len2 > size_r)
	return (0);

	int carry = 0;
	int i = len1 - 1;
	int j = len2 - 1;
	int k = 0;

	while (i >= 0 || j >= 0 || carry > 0)
	{

	int digit1 = i >= 0 ? n1[i] - '0' : 0;
	int digit2 = j >= 0 ? n2[j] - '0' : 0;
	int sum = digit1 + digit2 + carry;

	r[k++] = (sum % 10) + '0';


	carry = sum / 10;
	i--;
	j--;
	}
	r[k] = '\0';

	int lenr = strlen(r);

	for (int i = 0; i < lenr / 2; i++)
	{
	char temp = r[i];

	r[i] = r[lenr - 1 - i];
	r[lenr - 1 - i] = temp;
	}

	return (r);
}
