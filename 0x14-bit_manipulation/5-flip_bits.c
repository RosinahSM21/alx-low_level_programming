#include "main.h"

/**
 * flip_bits - The total amount of bits that have to be updated is recorded
 *  enabling shifting from a certain number to an alternate one
 * @f: launching from first numeric status
 * @i: Second of all number inputted
 *
 * Return: Which bits needed being updated
 */
unsigned int flip_bits(unsigned long int f, unsigned long int i)
{
	int g, impower = 0;
	unsigned long int curt;
	unsigned long int exclusive = f ^ i;

	for (g = 63; g >= 0; g--)
	{
		curt = exclusive >> g;
		if (curt & 1)
			impower++;
	}

	return (impower);
}

