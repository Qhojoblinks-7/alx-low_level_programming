#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

int main(int argc, char *argv[])
{
	int num1;
	char *operator;
	int num2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("%s", argv[0]);
		return (1);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	operation = get_op_func(operator);

	if (operation != NULL)
	{
		result = operation(num1, num2);
		printf("%d\n", result);
	}
	else
	{
		printf("Operator %s not found\n", operator);
		return 2;
	}

	return 0;
}
