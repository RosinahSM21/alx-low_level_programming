#include "lists.h"

/**
 * add_nodeint - add other node that represents linked list's initial position
 * @head: point towards the list's base node
 * @n: details to add to that new node
 *
 * Return: the new node's reference, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

