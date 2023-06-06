#include "lists.h"

/**
 * insert_nodeint_at_index - a linked list's latest node has been added,
 * at an identified spot
 * @head: A pointer pointing to the list's initial node
 * @idx: index associated with the recently inserted node
 * @n: content to be provided to the newly created node
 *
 * Return: If NULL, the pointer to the freshly created node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int r;
	listint_t *new;
	listint_t *momentary = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (r = 0; momentary && r < idx; r++)
	{
		if (r == idx - 1)
		{
			new->next = momentary->next;
			momentary->next = new;
			return (new);
		}
		else
			momentary = momentary->next;
	}

	return (NULL);
}

