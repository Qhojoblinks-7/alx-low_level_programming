#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: a pointer to the file
 * @letters: size of letters to be read
 * Return: letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *fileBuffer;
	ssize_t bytes_read = 0, bytes_written;

	if (filename == NULL)
	{
		return (0);
	}

	file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}

	fileBuffer = (char *)malloc(sizeof(char) * (letters + 1));
	if (fileBuffer == NULL)
	{
		fclose(file);
		return (0);
	}


	fileBuffer[bytes_read] = '\0';

	bytes_written = write(STDOUT_FILENO, fileBuffer, bytes_read);

	free(fileBuffer);
	fclose(file);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		return (0);
	}
	return (bytes_written);
}
