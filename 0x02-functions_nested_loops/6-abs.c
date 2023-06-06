#include <stdio.h>
#include "main.h"

/**
 * _abs - a function that prints the absolute value
 * of an integer.
 * if the nunber is < 0 multiply it by -1
 * if the number is positive or already 0
 * no changes are made. the resulting value
 * is the abs of the original number
 *
 *@num: the original number
 * Return: 0
 */

int _abs(int num)
{
	int result;


	if (num < 0)
	{
		result = num * -1;
	}

	else
	{
		result = num;
	}
	return (result);
}
