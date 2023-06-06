#include "lists.h"

/**
 * add_nodeint_end - concludes a linked list with an additional node
 * @head: pointing to the list's top component
 * @g: information to add to the new component
 *
 * Return: the new node's a point of reference or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int g)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = g;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
