#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints of a linked list's whole elements
 * @h: To print a pointer to the list_t list
 *
 * Return: number nodes are printed
 */
size_t print_list(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		m++;
	}

	return (m);
}
