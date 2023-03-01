#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * main - creating a program that prints the random valid passwords
 * fro the the program 101-crackme
 * Return: Always 0
 */

int main (void)
{
	char password[PASSWORD_LENGTH + 1];
	int i, random_number;


	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		random_number = rand() % 62;

		if (random_number < 26)
		{
			password[i] = 'a' + random_number;
		}
		else if (random_number < 52)
		{
			password[i] = 'A' + random_number - 26;
		}
		else
		{
			password[i] = '0' + random_number - 52;
		}
	}

	password [PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}
