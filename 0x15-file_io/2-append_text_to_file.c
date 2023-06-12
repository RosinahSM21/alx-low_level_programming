#include "main.h"

/**
 * append_text_to_file - information which appears at the very end of a file.
 * @fileID: An allusion referring to the file's id.
 * @text_content: The string required to be inserted at the file's the end.
 *
 * Return: -1 if the fileid is NULL or the procedure failed.
 *         -1 if a user lacks permission to write and the file is absent.
 *         As an alternative, 1.
 */
int append_text_to_file(const char *fileID, char *text_content)
{
	int o, w, len = 0;

	if (fileID == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(fileID, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

