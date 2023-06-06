#include "lists.h"

/**
 * listint_len - results in the total number of a linked list's elements.
 * @b: traversal of a linked list of subtype listint_t
 *
 * Return: Numerous nodes success
 */
size_t listint_len(const listint_t *b)
{
	size_t num = 0;

	while (b)
	{
		num++;
		b = b->next;
	}

	return (num);
}
