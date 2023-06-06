#include "lists.h"

/**
 * reverse_listint - a linked list that it changes
 * @head: Referential reference to this list's foundation node
 *
 * Return: descriptor for the top-level node of the updated list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
