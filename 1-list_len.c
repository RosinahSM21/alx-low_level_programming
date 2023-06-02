#include <stdlib.h>
#include "lists.h"

/**
 * list_len - results in the total number of a linked list's elements.
 * @h: the list_t list's pointer
 *
 * Return: numeric of h's elements
 */
size_t list_len(const list_t *h)
{
	size_t f = 0;

	while (d)
	{
		f++;
		d = d->next;
	}
	return (f);
}

