#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - a function that adds two numbers
 * @a: first num
 * @b: second num
 * Return: 0
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that subtracts one number form the other
 * @a: first number
 * @b: second number
 * Return: 0
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a fuction that returns the product of two numbers
 * @a: first number
 * @b: second number
 * Return: 0
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divides one number by the other
 * @a: first nummber
 * @b: second number
 * Return: 0
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function that finds the remender of a number
 * @a: first number
 * @b: second number
 * Return: 0
 */

int op_mod(int a, int b)
{
	return (a % b);
}
