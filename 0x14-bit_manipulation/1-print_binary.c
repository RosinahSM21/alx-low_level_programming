#include "main.h"

/**
 * print_binary - prints each decimal number's binary in a analogue.
 * @f: Using binary numrrics  to be  printed
 */
void print_binary(unsigned long int f)
{
	int m, count = 0;
	unsigned long int current;

	for (m = 63; m >= 0; m--)
	{
		current = f >> m;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

