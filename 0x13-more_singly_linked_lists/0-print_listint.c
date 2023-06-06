#include "lists.h"

/**
 * print_listint - prints every element on a linked list
 * @b: to print a list that is linked of listint_t type
 *
 * Return: number of nodes success
 */
size_t print_listint(const listint_t *b)
{
	size_t num = 0;

	while (b)
	{
		printf("%d\n", b->n);
		num++;
		b = b->next;
	}

	return (num);
}
