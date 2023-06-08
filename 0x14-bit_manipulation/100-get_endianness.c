#include "main.h"

/**
 * get_endianness - finds out if a computer is large or minuscule endian
 * Return: returns the out put of 0 is the  large, 1 for petite
 */
int get_endianness(void)
{
	unsigned int m = 1;
	char *a = (char *) &m;

	return (*a);
}

