#include "main.h"

/**
 * binary_to_uint - evolves a numerical value from binary to unsigned
 * @j: The number in binary format is encoded throughout the string.
 *
 * Return: The end result of conversion of numeric success
 */
unsigned int binary_to_uint(const char *j)
{
	int m;
	unsigned int dec_val = 0;

	if (!j)
		return (0);

	for (m = 0; j[m]; m++)
	{
		if (j[m] < '0' || j[m] > '1')
			return (0);
		dec_val = 2 * dec_val + (j[m] - '0');
	}

	return (dec_val);
}
