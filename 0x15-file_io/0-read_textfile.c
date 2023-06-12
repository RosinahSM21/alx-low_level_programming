#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Textual file retrieved; publish to STDOUT.
 * @fileID: decoding the contents of a text file
 * @phonicsAZ: How plenty characters are necessary to read
 * Return: w- Exact quantities of messages read and written bytes
 *        0, if the operation collapses if the title of the file is NULL.
 */
ssize_t read_textfile(const char *fileID, size_t phonicsAZ)
{
	char *buf;
	ssize_t gi;
	ssize_t x;
	ssize_t u;

	gi = open(fileID, O_RDONLY);
	if (gi == -1)
		return (0);
	buf = malloc(sizeof(char) * phonicsAZ);
	u = read(gi, buf, phonicsAZ);
	x = write(STDOUT_FILENO, buf, u);

	free(buf);
	close(gi);
	return (x);
}

