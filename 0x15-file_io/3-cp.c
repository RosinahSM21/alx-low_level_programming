#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - In 1024 bytes are placed separate using for a buffer.
 * @file: The name of the file buffer wherever the characters are stored.
 *
 * Return: input An allusion to the just lately constructed buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - file classifications are closed down.
 * @fd: The final segment of the file's descriptor.
 */
void close_file(int fd)
{
	int a;

	a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - replicates a file's data from a particular file to a different one.
 * @argc:  The number of variables had been provided to the program.
 * @argv: An collection of parameters' addresses.
 *
 * Return: 0 towards performance success.
 *
 * Description:  Exiting code 97 needs to be used if its argument count is bad
 *              Exit code 98 pops if file_from will not exist or  unreaded.
 *              Exit code 99 occurs if file_to cannot read or write
 *              Exit code 100 is seen while file_to or file_from can not close.
 */
int main(int argc, char *argv[])
{
	int from, to, s, x;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	s = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || s == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		x = write(to, buffer, s);
		if (to == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		s = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (s > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}

