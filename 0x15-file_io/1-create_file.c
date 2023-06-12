#include "main.h"

/**
 * create_file - sets up a brand-new file.
 * @fileID: The reference to the file's existence that needs to be constructed.
 * @text_content: a string connection that may be recorded to the file.
 *
 * Return: If the procedure is failing, -1.
 *         alternatively, 1.
 */
int create_file(const char *fileID, char *text_content)
{
	int gi, x, len = 0;

	if (fileID == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	gi = open(fileID, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(gi, text_content, len);

	if (gi == -1 || x == -1)
		return (-1);

	close(gi);

	return (1);
}

