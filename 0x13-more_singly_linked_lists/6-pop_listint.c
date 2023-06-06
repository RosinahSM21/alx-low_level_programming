#include "lists.h"

/**
 * pop_listint - disables the linked list's header node
 * @head: pointer to the linked list's upper-level component
 *
 * Return: The elimination of data included throughout the components,
 * or 0 if it explain anything about empty in list
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int digit;

	if (!head || !*head)
		return (0);

	digit = (*head)->n;
	temporary = (*head)->next;
	free(*head);
	*head = temporary;

	return (digit);
}

