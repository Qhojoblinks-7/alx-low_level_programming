#include <stdlib.h>
#include <time.h>
#include <stdio>

/**
 * main - assign a random number to int n anytime
 * it executes and print it
 * Return: Alway 0
 */
int main(void)
{
	int n;
	srand(time (0));
	n=rand() - RAND_MAX/2;
	if(n>0)
		printf("%ld is positive\n", n);
	else if (n==0)
		printf("%ld is zero\n", n);
	else if(n<0)
		printf("%ld is negative\n", n);
	return (0);
