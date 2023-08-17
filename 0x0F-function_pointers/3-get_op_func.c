#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - function that selects the correct function to
 *  perform the operation asked by the user
 *  @s: a string
 *  Return: 0
 */

int (*get_op_func(char *s))(int, int)
{
	int index = 0;
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	index = (s[0] == '+') * 0 + (s[0] == '-') * 1 + (s[0] == '*') *
		2 + (s[0] == '/') * 3 + (s[0] == '%') * 4;

	if (ops[index].op[0] == s[0] && ops[index].op[1] == '\0')
	{
		return (ops[index].f);
	}
	return (NULL);
}
