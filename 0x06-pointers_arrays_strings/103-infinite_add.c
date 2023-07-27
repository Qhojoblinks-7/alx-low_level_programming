#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Fuction that does infinite addition and returns
 * a pointer.
 * @n1:a pointer to the first number.
 * @n2:a pointer to the second number.
 * @r: buffer.
 * @size_r: size of buffe.
 *
 * Return: a character value.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, i, max_len = 0, sum = 0;

	len1 = strlen(n1);
	len2 = strlen(n2);

	if (len1 > len2)
	{
		max_len = len1;
	}
	else
	{
		max_len = len2;
	}

	if (max_len + 1 > size_r)
		return (NULL);


	char n1_padded[max_len + 2];/* Extra space for potential carry*/
	char n2_padded[max_len + 2];
	memset(n1_padded, '0', max_len + 1);
	memset(n2_padded, '0' , max_len + 1);

	/* Copy the original number strings after the leading zeros */
	strncopy(n1_padded + max_len - len1 + 1, n1, len1);
	strncopy(n2_padded + max_len - len2 + 1, n2, len2);

	/*Ensuring Null termination for the padded number string */
	n1_padded[max_len + 1] = '\0';
	n2_padded[max_len + 1] = '\0';

	/*perform addition*/
	for (i = max_len; i >= 0; i--)
	{
		sum = (n1_padded[i] - '0') + (n2_padded[i] - '0') + carry;
		r[i] = (sum % 10) + '0';/*convert sum to character and store in the result buffer*/
		carry = sum / 10;
	}

	/*checking for any remaining carry*/
	if (carry > 0)
	{
		r[max_len + 1] = carry + '0';
		r[max_len + 2] = '\0;
	}
	else
	{
		r[max_len + 1] = '\0';
	}
	return (r);
}
