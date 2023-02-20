#include <stdio.h>

/**
 * main - print all the lowercase letters in thge reverse form
 * followed by a new line 
 * Return: Alway 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
