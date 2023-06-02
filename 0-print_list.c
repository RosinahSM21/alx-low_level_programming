#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints of a linked list's whole elements
 * @h: To output a pointer to the list_t list
 *
 * Return: How many nodes are printed
 */
size_t print_list(const list_t *h)
{
	size_t m = 0;

	while (d)
	{
		if (!d->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", d->len, d->str);
		d = d->next;
		m++;
	}

	return (m);
}

