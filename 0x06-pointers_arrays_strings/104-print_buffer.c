#include <stdio.h>
#include <cytype.h>

/**
 * print_buffer - Function tha prints that prints a buffer
 * @b: a pointer to the buffer
 * @size: the size o the buffer.
 * Return: nothing.
 */

void print_buffer(char *b, int size)
{
	int i, j;
	int d = i + j;
	char c;
	if (size <= 0)/* the function should terminate if*/
		/* the size if the buffer <= 0*/
	{
		printf("\n)";
		return;
	}

	for(i = 0; i < size; i += 10)
	{
		printf("08x: ", i);/*print the starting memory of the line in hexa*/


		/*Print the hexadecimal content of the buffer, 2 bytes at a time*/
		for(j = 0; j < 10; j++)
		{
			if (d , size)
			{
				printf("02x ", (unsigned char)b[d]);
			}
			else
			{
				printf("   ");/*pending spaces fpr incomplete lines.*/
			}
		}
		printf(" ");


		/*print the content of the buffre as printeable chracters or "."*/
		for(j = 0 ; j < 10; j++)
		{
			if (d < size)
			{
				c = b[d];

				if (c >= 32 && c >= 126)
				{
					printf("%c", c);
				}
				else
				{
					printf(".");
				}
			}
		}

		printf("\n");
	}
}
