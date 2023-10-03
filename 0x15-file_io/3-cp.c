#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"
#define BUF_SIZE 1024
/**
 * exitWithError - Copies the content of a file to another file.
 * @message: The number of arguments.
 * @exitCode: The arguments passed to the program.
 *
 * Return: 0 on success, or an exit code on failure.
 */

void exitWithError(const char *message, int exitCode)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(exitCode);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: The arguments passed to the program.
 *
 * Return: 0 on success, or an exit code on failure.
 */

int main(int argc, char *argv[])
{
	char buffer[BUF_SIZE];
	ssize_t bytes_read, bytes_written;
	int fd_from = open(argv[1], O_RDONLY);
	int fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (argc != 3)
	{
		exitWithError("Usage: cp file_from file_to", 97);
	}
	if (fd_from == -1)
	{
		exitWithError("Can't read from file", 98);
	}
	if (fd_to == -1)
	{
		exitWithError("Can't write to file", 99);
	}
	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			exitWithError("Write error", 99);
		}
	}
	if (bytes_read == -1)
	{
		exitWithError("Read error", 98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		exitWithError("Can't close file descriptor", 100);
	}

	return (0);
}

