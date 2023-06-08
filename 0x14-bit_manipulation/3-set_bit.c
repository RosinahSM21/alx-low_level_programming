#include "main.h"

/**
 * set_bit - An entered index assigns a bit with 1
 * @j: indicator reflecting the modified integer
 * @index:  bit's index required been configured to be designated as 1
 *
 * Return: valid input 1 for success, -1 for inability
 */
int set_bit(unsigned long int *j, unsigned int index)
{
	if (index > 63)
		return (-1);

	*j = ((1UL << index) | *j);
	return (1);
}

