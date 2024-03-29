#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "main.h"

/**
 * create_file - creates a file and writes text content to it
 * @filename: the name of the file to create
 * @text_content: the content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, length, bytes_written;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	file_descriptor = open(filename, O_WRONLY | O_CREAT |
			O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_descriptor == -1)
	{
		return (-1);
	}

	length = 0;
	while (text_content[length] != '\0')
	{
		length++;
	}
	if (text_content != NULL)
	{
		bytes_written = write(file_descriptor, text_content, length);
		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (bytes_written);
}
