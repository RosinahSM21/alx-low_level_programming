#include "lists.h"

/**
 * delete_nodeint_at_index - bans a node on an selected index in a linked list.
 * @head: pointing to the list's topmost entry
 * @index: index associated with the destroyed node
 *
 * Return: 1 (Success) versus -1 (Failure).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary = *head;
	listint_t *current = NULL;
	unsigned int r = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temporary);
		return (1);
	}

	while (r < index - 1)
	{
		if (!temporary || !(temporary->next))
			return (-1);
		temporary = temporary->next;
		r++;
	}


	current = temporary->next;
	temporary->next = current->next;
	free(current);

	return (1);
}

