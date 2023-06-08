#include "main.h"

/**
 * get_bit - The bits results an index in form of decimal number returns.
 * @j: numerous pieces to  recognise in searchings
 * @index: code instructions for the bit in index
 *
 * Return: my bi's importance input return success
 */
int get_bit(unsigned long int j, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (j >> index) & 1;

	return (bit_val);
}

