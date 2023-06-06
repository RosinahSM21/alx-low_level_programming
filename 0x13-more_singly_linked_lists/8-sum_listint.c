#include "lists.h"

/**
 * sum_listint - totals all of the data included in a listint_t list.
 * @head: preliminary node on a linked list
 *
 * Return: the outcome of the quantity success
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *momentary = head;

	while (momentary)
	{
		sum += momentary->n;
		momentary = momentary->next;
	}

	return (sum);
}

