#include "main.h"

/**
 * clear_bit - transforms the specific bit's output to 0.
 * @j: connection onto the certain digit that you want
 * @ranking: The bit that is used to clean up ranking
 *
 * Return: One for success and one for defeat
 */
int clear_bit(unsigned long int *j, unsigned int ranking)
{
	if (ranking > 63)
		return (-1);

	*j = (~(1UL << ranking) & *j);
	return (1);
}

