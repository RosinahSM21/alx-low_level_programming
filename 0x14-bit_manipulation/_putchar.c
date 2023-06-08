#include "main.h"
#include <unistd.h>
/**
 * _putchar - stdout has been amended with the first character of C
 * @c: The piece of content would be printed
 *
 * Return: Related returns success 1.
 * Errno is set precisely and -1 will be provided in the case of an error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
